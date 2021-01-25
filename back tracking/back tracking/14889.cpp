//
//  14889.cpp
//  back tracking
//
//  Created by 임수정 on 2020/07/09.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
using namespace std;
static int N;
bool ischeck[20] = {false,};
int start[10];
int link[10];
int stats[20][20];
int gap = 10000;

void f(int cnt){
    if(cnt == N/2){
        int j = 0;
        for(int i = 0 ; i < N ; i++){
            if(!ischeck[i])
                link[j++] = i;
        }
        //팀선정 완료
        int sumOfStart = 0;
        int sumOfLink = 0;
        for(int i = 0 ; i < N/2 -1 ; i++){
            for(int j = i+1 ; j < N/2 ; j++){
                sumOfStart += (stats[start[i]][start[j]] + stats[start[j]][start[i]]);
                sumOfLink += (stats[link[i]][link[j]] + stats[link[j]][link[i]]);
            }
        }
        if(gap > abs(sumOfStart - sumOfLink))
            gap = abs(sumOfStart - sumOfLink);
        //한 조합에 대한 점수의 합 계산 완료
    }
    else{
        if(cnt == 0){
            if(!ischeck[0]){
                ischeck[0] = true;
                start[cnt] = 0;
                f(cnt+1);
                ischeck[0] = false;
            }
        }
        else{
            for(int i = start[cnt-1] ; i < N ; i++){
                if(!ischeck[i]){
                    ischeck[i] = true;
                    start[cnt] = i;
                    f(cnt+1);
                    ischeck[i] = false;
                }
            }
        }
    }
}

int main(){
    cin >> N;
    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < N ; j++)
            cin >> stats[i][j];
    }
    int cnt = 0;
    f(cnt);
    cout << gap;
    return 0;
}

