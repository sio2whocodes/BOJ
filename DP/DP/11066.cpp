//
//  11066.cpp
//  DP
//
//  Created by 임수정 on 2021/06/28.
//  Copyright © 2021 임수정. All rights reserved.
//

#include <iostream>
using namespace std;

int nodes[500];
int acum[500];
int page[500];

int main(){
    int T;
    cin >> T;
    
    int K;
    int addLast, addNew, newNodeLast, newNodeNew;
    for(int i = 0 ; i < T ; i++){
        cin >> K;
        for(int j = 0 ; j < K ; j++){
            cin >> page[j];
        }
        nodes[0] = page[0];
        acum[0] = 0;
        nodes[1] = page[0]+page[1];
        acum[1] = nodes[1];
        
        for(int k = 2 ; k < K ; k++){
            
            newNodeNew = page[k]+page[k-1];
            addNew = newNodeNew + nodes[k-2] + newNodeNew + acum[k-2];
            
            newNodeLast = page[k]+nodes[k-1];
            addLast = newNodeLast + acum[k-1];
            
            if(addLast > addNew){
                nodes[k] = newNodeNew+nodes[k-2];
                acum[k] = addNew;
            }else{
                nodes[k] = newNodeLast;
                acum[k] = addLast;
            }
            cout << nodes[k]<< ","<<  acum[k] << endl;
        }
        cout << acum[K-1] << "\n";
    }
    
    return 0;
}
