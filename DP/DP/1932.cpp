//
//  1932.cpp
//  DP
//
//  Created by 임수정 on 2020/08/11.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int integers[500][500];
    
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j <= i ; j++){
            cin >> integers[i][j];
        }
    }
    for(int i = n-2 ; i >= 0 ; i--){
        for(int j = 0 ; j <= i ; j++){
            integers[i][j] += max(integers[i+1][j], integers[i+1][j+1]);
        }
    }
    cout << integers[0][0];
    return 0;
}
