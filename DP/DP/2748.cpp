//
//  main.cpp
//  DP
//
//  Created by 임수정 on 2020/07/16.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
using namespace std;
unsigned long long fibo[10001];
int main(){
    int n;
    cin >> n;
    fibo[0] = 0;
    fibo[1] = 1;
    if(n <= 1){
        cout << fibo[n];
        return 0;
    }
    for(int i = 2 ; i <= n; i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    cout << fibo[n];
    return 0;
}
