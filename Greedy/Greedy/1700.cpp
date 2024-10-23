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
        
    int sequence[100];
    for(int i = 1 ; i <= K ; i++){
        cin >> sequence[i];
    }
    
    // process
    bool isOn[101] = {false,};
    int avail_port = N;
    int switchCnt = 0;
    
    for(int n = 1; n <= K; n++){
        int now = sequence[n];
        //꽂혀있는지 확인
        if(!isOn[now]){
            if(avail_port > 0){
                // 빈공간있음
                avail_port--;
                isOn[now] = true;
            } else {
                // 빼야됨 - 빈공간 없음
                int target = 1;//뽑을 기기 번호
                int distance = -1; // 꽂혀있는 기기 중 스케쥴에서 가장 거리가 먼 (가장 나중에 사용할) 기기 고르기
                for(int i = 1; i <= K ; i++){
                    if(isOn[i]){
                        // 스케쥴 순서에서 지금 플러그에 꽂혀있는 i와 같은 기기의 거리 알기
                        bool existlater = false;
                        for(int j = n+1; j <= K ; j++){
                            if(sequence[j] == i && !existlater) {
                                existlater = true;
                                if(j-n > distance){
                                    distance = (j-n);
                                    target = i;
                                    break;
                                }
                            }
                        }
                        if(!existlater){
                            target = i;
                            break;
                        }
                    }
                }
                isOn[target] = false;
                isOn[now] = true;
                switchCnt++;
            }
        } else {
            // 꽂혀있을 때
        }
    }
    
    cout << switchCnt;
    
    return 0;
}

