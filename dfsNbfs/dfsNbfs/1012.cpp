//
//  1012.cpp
//  dfsNbfs
//
//  Created by 임수정 on 2021/02/10.
//
//https://www.acmicpc.net/problem/1012
//https://sio2whocode.tistory.com/87

#include <iostream>
using namespace std;
bool visit[50][50];
bool map[50][50];
int dr[4] = {0,0,1,-1};
int dc[4] = {1,-1,0,0};

void dfs(int r, int c){
    visit[r][c] = true;
    for(int i = 0 ; i < 4 ; i++){
        int nr = r+dr[i];
        int nc = c+dc[i];
        if(map[nr][nc] && !visit[nr][nc]){
            dfs(nr,nc);
        }
    }
}

int main(){
    int t;
    cin >> t;
    for(int i = 0 ; i < t ; i++){
        int m,n,k;
        cin >> m >> n >> k;
        for(int q = 0 ; q < m ; q++){
            for(int w = 0 ; w < n ; w++){
                visit[q][w] = false;
                map[q][w] = false;
            }
        }
        int r,c;
        for(int j = 0 ; j < k ; j++){
            cin >> r >> c;
            map[r][c] = true;
        }
        int cnt = 0;
        for(int a = 0 ; a < m ; a++){
            for(int b = 0 ; b < n ; b++){
                if(!visit[a][b] && map[a][b]){
                    dfs(a,b);
                    cnt++;
                }
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}
