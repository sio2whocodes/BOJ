//
//  14888.cpp
//  back tracking
//
//  Created by 임수정 on 2020/07/10.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
using namespace std;
static int N;
bool ischeck[10] = {false,};
int seq[10];
int An[11];
int numOfOperator[4];
int operators[10];
int result;
int Min = 1000000000;
int Max = -1000000000;

void f(int cnt){
    if(cnt == N-1){
        result = An[0];
        for(int i = 0 ; i < N-1 ; i++){
            if(seq[i] == 0)
                result += An[i+1];
            else if(seq[i] == 1)
                result -= An[i+1];
            else if(seq[i] == 2)
                result = result * An[i+1];
            else
                result = result / An[i+1];
        }
        //계산 완료
        if(Min > result)
            Min = result;
        if(Max <= result)
            Max = result;
    }
    else{
        for(int i = 0 ; i < N-1 ; i++){
            if(!ischeck[i]){
                ischeck[i] = true;
                seq[cnt] = operators[i];
                f(cnt+1);
                ischeck[i] = false;
            }
        }
    }
}

int main(){
    cin >> N;
    for(int i = 0 ; i < N ; i++)
        cin >> An[i];
    int cnt = 0;
    for(int i = 0 ; i < 4 ; i++){
        cin >> numOfOperator[i];
        for(int j = 0 ; j < numOfOperator[i]; j++)
            operators[cnt++] = i;
    }
    cnt = 0;
    f(cnt);
    cout << Max << "\n" << Min;
    return 0;
}
