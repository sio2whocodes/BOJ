//
//  11050.cpp
//  math3
//
//  Created by 임수정 on 2020/08/06.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    
    int* BC = new int[k+1];
    for(int i = 1 ; i <= n ; i++){
        for(int j = k ; j >= 0 ; j--){
            if(j == 0 || j == i){
                BC[j] = 1;
            }
            else{
                BC[j] = BC[j-1] + BC[j];
            }
        }
    }
    cout << BC[k];
    
    return 0;
}
