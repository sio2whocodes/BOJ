//
//  15652.cpp
//  back tracking
//
//  Created by 임수정 on 2020/07/08.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
using namespace std;
static int N, M;
int result[8];

void f(int cnt){
    if(cnt == M){
        for(int i = 0 ; i < M ; i++)
            cout << result[i] << " ";
        cout << "\n";
    }
    else{
        if(cnt == 0){
            for(int i = 0 ; i < N ; i++){
                result[cnt] = i+1;
                f(cnt+1);
            }
        }
        else{
            for(int i = result[cnt-1]-1 ; i < N ; i++){
                result[cnt] = i+1;
                f(cnt+1);
            }
        }
    }
}

int main(){
    cin >> N >> M;
    int cnt = 0;
    f(cnt);
    return 0;
}
