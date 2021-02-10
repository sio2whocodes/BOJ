//
//  2667.cpp
//  dfsNbfs
//
//  Created by 임수정 on 2021/02/09.
//
//https://sio2whocode.tistory.com/85
//https://www.acmicpc.net/problem/2667

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n;
bool map[26][26];
bool visit[26][26];
int dr[4] = {0,0,1,-1};
int dc[4] = {1,-1,0,0};
vector<int> cnts;
int cnt = 0;
void dfs(int r, int c){
    cnt++;
    visit[r][c] = true;
    for(int i = 0 ; i < 4 ; i++){
        int nr = r+dr[i];
        int nc = c+dc[i];
        if(!visit[nr][nc] && map[nr][nc]){
            dfs(nr,nc);
        }
    }
}
int main(){
    cin >> n;
    char c;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cin >> c;
            map[i][j] = c-'0';
        }
    }

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(map[i][j] && !visit[i][j]){
                dfs(i,j);
                cnts.push_back(cnt);
                cnt = 0;
            }
        }
    }
    sort(cnts.begin(),cnts.end());
    cout << cnts.size() << "\n";
    for(int i = 0 ; i < cnts.size() ; i++){
        cout << cnts[i] << "\n";
    }
    return 0;
}
