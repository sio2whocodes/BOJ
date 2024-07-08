//
//  1987.cpp
//  dfsNbfs
//
//  Created by sujeong on 7/8/24.
//

#include <iostream>
using namespace std;

int dr[4] = {0, 1, 0, -1};
int dc[4] = {1, 0, -1, 0};
int result = 0;
char board[20][20];
int r, c;

void dfs(bool visit[], int cr, int cc, int num){
    result = result < num ? num : result;
    
    for(int i = 0 ; i < 4 ; i++){
        int nr = cr + dr[i];
        int nc = cc + dc[i];

        if(nr >= 0 && nr < r && nc >= 0 && nc < c && !visit[board[nr][nc]-'A']){
            visit[board[nr][nc]-'A'] = true;
            dfs(visit, nr, nc, num+1);
            visit[board[nr][nc]-'A'] = false;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> r >> c;
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            cin >> board[i][j];
        }
    }
    
    bool visit[26] = {0,};
    visit[board[0][0]-'A'] = true;
    dfs(visit, 0, 0, 1);
    cout << result;
}
