//
//  2501.cpp
//  BruteForce
//
//  Created by sujeong on 7/23/24.
//  Copyright © 2024 임수정. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    int N, K;
    cin >> N >> K;
    
    int cnt = 0;
    for(int d = 1; d <= N; d++){
        if(N % d == 0){
            cnt++;
            if(cnt == K){
                cout << d;
                return 0;
            }
        }
    }
    
    cout << 0;
    return 0;
}
