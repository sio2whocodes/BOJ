//
//  1700.cpp
//  Greedy
//
//  Created by sujeong on 8/28/24.
//  Copyright © 2024 임수정. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // input
    int N, K;
    cin >> N >> K;
    
    int numOfUse[101] = {0,};
    
    int sequence[100];
    for(int i = 0 ; i < K ; i++){
        cin >> sequence[i];
        numOfUse[sequence[i]]++;
    }
    
    // process
    bool isOn[101] = {false,};
    int avail_port = N;
    int switchCnt = 0;
    
    for(int n = 0; n < K; n++){
        int now = sequence[n];
        if(!isOn[now]){
            if(avail_port > 0){
                avail_port--;
                isOn[now] = true;
                numOfUse[now]--;
            } else {
                // 빼야됨
                int target = 0;
                int distance = -1;
                for(int i = 1; i <= K ; i++){
                    if(isOn[i]){
                        // 순서에서 지금 플러그에 꽂혀있는 i와의 거리 알기
                        bool existlater = false;
                        for(int j = n+1; j < K ; j++){
                            if(sequence[j] == i && j-n > distance) {
                                distance = j-n;
                                target = sequence[j];
                                existlater = true;
                            }
                        }
                        if(!existlater){
                            target = i;
                        }
                    }
                }
                isOn[target] = false;
                isOn[now] = true;
                numOfUse[now]--;
                switchCnt++;
            }
        } else {
            numOfUse[now]--;
        }
    }
    
    cout << switchCnt;
    
    return 0;
}
