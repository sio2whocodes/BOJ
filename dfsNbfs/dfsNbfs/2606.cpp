//
//  main.cpp
//  dfsNbfs
//
//  Created by 임수정 on 2021/02/08.
//
//https://www.acmicpc.net/problem/2606
//https://sio2whocode.tistory.com/84

#include <iostream>
#include <vector>
using namespace std;
//6:22?-47
int n, m;
vector<vector<int>> adj;
bool visit[101];
int cnt = 0;
void dfs(int here){
    visit[here] = true;
    for(int i = 0 ; i < adj[here].size() ; i++){
        int next = adj[here][i];
        if(!visit[next]){
            dfs(next);
            cnt++;
        }
    }
}
int main(){
    cin >> n >> m;
    adj = vector<vector<int>>(n+1);
    int u,v;
    for(int i = 0 ; i < m ; i++){
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1);
    cout << cnt;
    return 0;
}
