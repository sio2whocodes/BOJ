//
//  12015.cpp
//  DP
//
//  Created by 임수정 on 2020/08/27.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int dp[1000][10]={0};
    for(int i = 0 ; i < 10 ; i++)
        dp[0][i] = 1;
    for(int i = 1 ; i < n ; i++){
        for(int j = 0 ; j < 10 ; j++){
            for(int k = j ; k < 10 ; k++){
                dp[i][j] = (dp[i][j]+dp[i-1][k]) % 10007;
            }
        }
    }
    
    int result = 0;
    for(int i = 0 ; i < 10 ; i++){
        result = (result+dp[n-1][i])%10007;
    }
    cout << result;
    return 0;
}
