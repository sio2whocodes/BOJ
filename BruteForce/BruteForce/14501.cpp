//
//  14501.cpp
//  BruteForce
//
//  Created by 임수정 on 08/03/2020.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int N;
int Time[16];
int Price[16];
int ans;

void getAns(int today, int sum){
    if(today > N){
        if(today == N + 1)
            ans = max(ans, sum);
        return;
    }
    
    getAns(today+Time[today], sum+Price[today]);
    getAns(today+1, sum);
}

int main(){
    cin >> N;
    
    for(int i = 1 ; i <= N; i++){
        cin >> Time[i] >> Price[i];
    }
    
    getAns(1, 0);
    cout << ans;
    return 0;
}
