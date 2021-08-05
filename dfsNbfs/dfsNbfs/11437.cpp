//
//  11437.cpp
//  dfsNbfs
//
//  Created by 임수정 on 2021/08/04.
//
//https://sio2whocode.tistory.com/135

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<vector<int>> adj(50001);
int parents[50001];
int depths[50001];
int visit[50001];
queue<int> q;

int main(){
    //input & init
    int N;
    cin >> N;
    
    for(int i = 0 ; i < N-1 ; i++){
        int p, c;
        cin >> p >> c;
        adj[p].push_back(c);
        adj[c].push_back(p);
    }
    
    //bfs : 부모노드, 깊이 계산
    parents[1] = 0;
    depths[1] = 1;
    q.push(1);
    while(!q.empty()){
        int parent = q.front();
        q.pop();
        visit[parent] = 1;
        for(int i = 0 ; i < adj[parent].size() ; i++){
            int child = adj[parent][i];
            if(!visit[child]){
                parents[child] = parent;
                depths[child] = depths[parent]+1;
                q.push(child);
            }
        }
    }
    
    //공통조상 탐색
    //input
    int M;
    cin >> M;
    
    for(int i = 0 ; i < M ; i++){
        int a, b;
        cin >> a >> b;
        int result = 1;
        while(true){
            if(a == b){
                result = a;
                break;
            }else{
                if(depths[a] > depths[b]){
                    a = parents[a];
                }else if(depths[a] < depths[b]){
                    b = parents[b];
                }else{
                    a = parents[a];
                    b = parents[b];
                }
            }
        }
        cout << result << "\n";
    }
    
    return 0;
}
