//
//  9095.cpp
//  DP
//
//  Created by 임수정 on 2020/08/25.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    
    int cases[11] = {0};
    cases[1] = 1;
    cases[2] = 2;
    cases[3] = 4;
    
    int n;
    for(int i = 0 ; i < T ; i++){
        cin >> n;
        for(int j = 4 ; j <= n ; j++){
            if(cases[j] != 0){
                continue;
            }
            cases[j] = cases[j-1]+cases[j-2]+cases[j-3];
        }
        cout << cases[n] << "\n";
    }
    
    return 0;
}
