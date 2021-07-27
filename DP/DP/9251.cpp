//
//  9251.cpp
//  DP
//
//  Created by 임수정 on 2021/07/26.
//  Copyright © 2021 임수정. All rights reserved.
//
//https://sio2whocode.tistory.com/131
#include <iostream>
#include <string>
using namespace std;

int main(){
    //init & input
    string a, b;
    cin >> a >> b;
    
    //process
    int dp[1001][1001];
    dp[0][0] = dp[0][1] = dp[1][0] = 0;
    
    for(int i = 1 ; i-1 < a.size() ; i++){
        for(int j = 1 ; j-1 < b.size() ; j++){
            if(a[i-1] == b[j-1]){
                dp[i][j] = dp[i-1][j-1] + 1;
            }else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    
    
    //output
    cout << dp[a.size()][b.size()] << "\n";
    
    return 0;
}
