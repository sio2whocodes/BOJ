//
//  11066-2.cpp
//  DP
//
//  Created by 임수정 on 2021/06/28.
//  Copyright © 2021 임수정. All rights reserved.
//
//https://sio2whocode.tistory.com/114
//https://www.acmicpc.net/problem/11066

#include <iostream>
#include <climits>
using namespace std;

int dp[500][500];
int sum[500];
int page[500];
int main(){
    int T;
    cin >> T;
    
    for(int t = 0 ; t < T ; t++){
        int K;
        cin >> K;
        
        for(int k = 0 ; k < K ; k++){
            cin >> page[k];
            if(k == 0)
                sum[k] = page[k];
            else
                sum[k] = sum[k-1] + page[k];
        }
        
        for(int gap = 1 ; gap < K ; gap++){
            for(int start = 0; start + gap < K ; start++){
                int end = start + gap;
                dp[start][end] = INT_MAX;
                for(int mid = start ; mid < end ; mid++){
                    dp[start][end] = min(dp[start][end], dp[start][mid] + dp[mid+1][end] + sum[end]-sum[start-1]);
                }
            }
        }
        cout << dp[0][K-1] << "\n";
    }
    
    return 0;
}
