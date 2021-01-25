//
//  1904.cpp
//  DP
//
//  Created by 임수정 on 2020/07/18.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    
    int cases[1000001];
    cases[1] = 1;
    cases[2] = 2;
    for(int i = 3 ; i <= N ; i++){
        cases[i] = (cases[i-1] + cases[i-2])%15746;
    }
    cout << cases[N];
    
    return 0;
}
