//
//  9663.cpp
//  back tracking
//
//  Created by 임수정 on 2020/07/16.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
using namespace std;
int N;
bool visit[15][15] = {false,};
int result = 0;

bool promising(int row, int col){
    if(row == 0){
        return true;
    }
    for(int i = 0 ; i < row ; i++){
        if(visit[i][col] || visit[i][col-(row-i)] || visit[i][col+(row-i)])
            return false;
    }
    return true;
}

void queen(int cnt){
    if(cnt == N){
        result++;
    }
    for(int row = cnt ; row < N ; row++){
        for(int col = 0 ; col < N ; col++){
            if(promising(row,col)){
                visit[row][col] = true;
                queen(cnt+1);
                visit[row][col] = false;
            }
        }
    }
}
int main(){
    cin >> N;
    queen(0);
    cout << result << "\n";
//    for(int i = 0 ; i < N ; i++){
//        for(int j = 0 ; j < N ; j++)
//            cout << visit[i][j] << " ";
//        cout << "\n";
//    }

    return 0;
}
