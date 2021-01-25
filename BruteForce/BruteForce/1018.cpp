//
//  1018.cpp
//  BruteForce
//
//  Created by 임수정 on 2020/07/30.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
using namespace std;
char board[51][51];
char startByW[9][9] = {
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW"
};
char startByB[9][9] = {
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB"
};
int getStartByW(int sr, int sc){
    int cnt = 0;
    for(int r = sr, rr = 0; rr < 8; r++, rr++){
        for(int c = sc, cc = 0; cc < 8 ; c++, cc++){
            if(board[r][c] != startByW[rr][cc]){
                cnt++;
            }
        }
    }
    return cnt;
}
int getStartByB(int sr, int sc){
    int cnt = 0;
    for(int r = sr, rr = 0; rr < 8 ; r++, rr++){
        for(int c = sc, cc = 0; cc < 8 ; c++, cc++){
            if(board[r][c] != startByB[rr][cc]){
                cnt++;
            }
        }
    }
    return cnt;
}
int getResult(int sr, int sc){
    return min(getStartByB(sr, sc), getStartByW(sr, sc));
}
int main(){
    int row, col;
    cin >> row >> col;
    
    for(int r = 0 ; r < row ; r++){
        cin >> board[r];
    }
    int min = 65;
    int semiResult;
    for(int r = 0 ; r <= row-8 ; r++){
        for(int c = 0 ; c <= col-8 ; c++){
            semiResult = getResult(r,c);
            if(min >= semiResult)
                min = semiResult;
        }
    }
    cout << min;
    
    return 0;
}
