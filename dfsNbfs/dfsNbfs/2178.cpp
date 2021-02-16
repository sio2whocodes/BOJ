//
//  2178.cpp
//  dfsNbfs
//
//  Created by 임수정 on 2021/02/15.
//
//https://sio2whocode.tistory.com/90
//https://www.acmicpc.net/problem/2178

#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int dr[4] = {0,0,1,-1};
int dc[4] = {1,-1,0,0};
vector<vector<int>> distances(101,vector<int>(101,0));

int main(){
    queue<pair<int, int>> q;
    vector<vector<int>> maze(105,vector<int>(105));
    
    int n,m;
    char is;
    cin >> n >> m;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin >> is;
            maze[i][j] = is-'0';
        }
    }
    
    distances[0][0] = 1;
    q.push(make_pair(0, 0));
    while(!q.empty()){
        pair<int,int> here = q.front();
        q.pop();
        for(int i = 0 ; i < 4 ; i++){
            int cr = here.first+dr[i];
            int cc = here.second+dc[i];
            if(cr >= 0 && cc >= 0 && distances[cr][cc] == 0 && maze[cr][cc]){
                q.push(make_pair(cr, cc));
                distances[cr][cc] = distances[here.first][here.second] + 1;
            }
        }
    }
    cout << distances[n-1][m-1];
    return 0;
}
