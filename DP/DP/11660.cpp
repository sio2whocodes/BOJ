//
//  11660.cpp
//  DP
//
//  Created by sujeong on 2024/06/24.
//  Copyright © 2024 임수정. All rights reserved.
//
//https://www.acmicpc.net/problem/11660
//https://sio2whocode.tistory.com/218

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;

    vector<vector<int>> board(n+1, vector<int>(n+1, 0));
    
    int num;
    for(int r = 1; r <= n; r++){
        for(int c = 1; c <= n; c++){
            cin >> num;
            board[r][c] = board[r][c-1] + num;
        }
    }
    
    vector<vector<int>> ranges(m, vector<int>(4));
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < 4 ; j++){
            cin >> ranges[i][j];
        }
    }
    
    for(int i = 0 ; i < m ; i++){
        int r1 = ranges[i][0];
        int c1 = ranges[i][1];
        int r2 = ranges[i][2];
        int c2 = ranges[i][3];
        int result = 0;
        for(int r = r1; r <= r2; r++){
            result += (board[r][c2] - board[r][c1-1]);
        }
        cout << result << "\n";
    }
    
    
    return 0;
}
