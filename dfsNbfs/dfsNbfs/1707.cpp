//
//  1707.cpp
//  dfsNbfs
//
//  Created by 임수정 on 2021/02/22.
//
//https://sio2whocode.tistory.com/95
//https://www.acmicpc.net/problem/1707

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool bfs(int firstNode, vector<int>& visit, vector<vector<int>>& adj){
    queue<int> q;
    q.push(firstNode);
    visit[firstNode] = 1;
    while(!q.empty()){
        int here = q.front();
        int sign = -1 * visit[here]; //반대
        q.pop();
        int there;
        for(long p = 0 ; p < adj[here].size() ; p++){
            there = adj[here][p];
            if(visit[there] == 0){
                q.push(there);
                visit[there] = sign;
            }else if(visit[there] == visit[here]){
                return false;
            }
        }
    }
    return true;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    int v,e;
    for(int i = 0 ; i < t ; i++){
        cin >> v >> e;
        vector<vector<int>> adj(v,vector<int>());
        vector<int> visit(v,0);
        int a,u;
        for(int j = 0 ; j < e ; j++){
            cin >> a >> u;
            adj[--a].push_back(--u);
            adj[u].push_back(a);
        }
        bool isBipatite = true;
        for(int vv = 0 ; vv < v ; vv++){
            if(visit[vv] == 0){
                if(!bfs(vv, visit, adj)){
                    isBipatite = false;
                    break;
                }
            }
        }
        cout << (isBipatite ? "YES\n" : "NO\n");
    }
    return 0;
}
