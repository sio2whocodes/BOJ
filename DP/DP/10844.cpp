//
//  10844.cpp
//  DP
//
//  Created by 임수정 on 2020/08/18.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int mod = 1000000000;
    int result[10][2];
    result[0][0] = 0;
    for(int i = 1 ; i <= 9 ; i++)
        result[i][0] = 1;
    
    for(int i = 1 ; i < n ; i++){
        for(int j = 0 ; j <= 9 ; j++){
            if(j==0)
                result[j][1] = result[j+1][0] % mod;
            else if(j==9)
                result[j][1] = result[j-1][0] % mod;
            else
                result[j][1] = (result[j-1][0] + result[j+1][0])%mod;
        }
        for(int j = 0 ; j <= 9 ; j++)
            result[j][0] = result[j][1];
    }
    long sum = 0;
    for(int i = 0 ; i <= 9 ; i++)
        sum += (result[i][0]%mod);
    cout << sum % mod;
    
    return 0;
}
