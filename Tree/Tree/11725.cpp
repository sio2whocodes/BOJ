//
//  main.cpp
//  Tree
//
//  Created by 임수정 on 2021/08/18.
//
//https://sio2whocode.tistory.com/143
//https://www.acmicpc.net/problem/11725
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool visit[100001];

int main(){
    int n;
    cin >> n;
    
    vector<vector<int>> adj(n+1);
    queue<int> q;
    int parents[n+1];
    for(int i = 0 ; i < n-1 ; i++){
        int a,b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    q.push(1);
    visit[1] = true;
    parents[1] = 0;
    
    while(!q.empty()){
        int parent = q.front();
        q.pop();
        for(int i = 0 ; i < adj[parent].size() ; i++){
            int child = adj[parent][i];
            if(!visit[child]){
                visit[child] = true;
                q.push(child);
                parents[child] = parent;
            }
        }
    }
    
    for(int i = 2 ; i <= n ; i++){
        cout << parents[i] << "\n";
    }
    return 0;
}
