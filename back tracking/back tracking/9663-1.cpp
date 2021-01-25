//
//  9663-1.cpp
//  back tracking
//
//  Created by 임수정 on 2020/07/27.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
using namespace std;
int N;
int col[15] = {0,};
int result = 0;

bool promising(int row){
    for(int r = 0 ; r < row ; r++){
        if(col[r] == col[row] || abs(col[row]-col[r]) == row - r)
           return false;
    }
    return true;
}

void queen(int cnt){
    if(cnt == N){
        result++;
    }
    for(int c = 0 ; c < N ; c++){
        col[cnt] = c;
        if(promising(cnt)){
            queen(cnt+1);
        }
        col[cnt] = 0;
    }
}
int main(){
    cin >> N;
    queen(0);
    cout << result;
    return 0;
}
