//
//  1916.cpp
//  Dijkstra
//
//  Created by sujeong on 10/23/24.
//

#include <iostream>
#include <vector>

using namespace std;
int INF = 987654321;

int main(){
    
    // input
    int N, M;
    cin >> N >> M;
    
    vector<vector<pair<int, int>>> adj(N+1);
    int s, e, c;
    for(int i = 1; i <= M ; i++){
        cin >> s >> e >> c;
        adj[s].push_back(make_pair(e, c)); // 단방향이었음!
    }
    
    vector<int> distance(N+1, INF);
    
    int S, E;
    cin >> S >> E;
    
    distance[S] = 0;
    
    // process
    vector<bool> visit(N+1, false);
    int visitedNode = 1;
    
    while(visitedNode < N){
        int cur = 1;
        // 방문하지 않은 노드 중 가장 가까운 노드 선정
        int min = INF;
        for(int i = 1; i <= N ; i++){
            if(!visit[i] && min >= distance[i]){
                min = distance[i];
                cur = i;
            }
        }
        visit[cur] = true;
        visitedNode++;
        
        for(int i = 0; i < adj[cur].size() ; i++){
            int next = adj[cur][i].first;
            int next_cost = adj[cur][i].second;
            // 간선 사용하여 거리 갱신
            if(distance[next] > distance[cur] + next_cost){
                distance[next] = distance[cur] + next_cost;
            }
        }
    }
    
    cout << distance[E];
    
}
