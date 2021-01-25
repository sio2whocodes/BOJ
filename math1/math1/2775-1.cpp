//
//  2775-1.cpp
//  math1
//
//  Created by 임수정 on 25/02/2020.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    
    int apart[15][15];
    for(int j = 1 ; j <= 14 ; j++)
        apart[0][j] = j;
    
    for(int i = 1 ; i <= 14 ; i++){
        for(int j = 1 ; j <= 14 ; j++){
            apart[i][j] = 0;
            for(int c = 1 ; c <= j; c++){
                apart[i][j] += apart[i-1][c];
            }
        }
    }
    
    for(int i = 0 ; i <= 14 ; i++){
           for(int j = 1 ; j <= 14 ; j++)
               cout << apart[i][j] << " ";
           cout <<endl;
       }
    
    int ans[T];
    for(int i = 0 ; i < T ; i++){
        int K, N;
        cin >> K >> N;

        ans[i] = apart[K][N];
    }
   
    
    for(int i = 0 ; i < T ; i++)
        cout << ans[i] << endl;
    
    return 0;
}
