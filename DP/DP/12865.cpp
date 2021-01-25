//
//  12865.cpp
//  DP
//
//  Created by 임수정 on 2020/08/18.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
using namespace std;

int dp[101][100001];
int main(){

    int n, k;
    cin >> n >> k;

    int weight, worth;
    for(int i = 1 ; i <= n ; i++){
        cin >> weight >> worth;
        for(int w = 0 ; w <= k ; w++){
            if(weight > w || (worth+dp[i-1][w-weight] < dp[i-1][w]) )
                dp[i][w] = dp[i-1][w];
            else
                dp[i][w] = dp[i-1][w-weight] + worth;
        }
    }
    
    cout << dp[n][k];
    return 0;
}
