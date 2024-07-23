//
//  14938.cpp
//  dfsNbfs
//
//  Created by sujeong on 7/10/24.
//
#define INF 210000000
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int items[101] = {0,};
int value[101][101];
vector<vector<pair<int, int>>> adj(101);
int N, M, R;

void dijkstra(int src){
    priority_queue<pair<int,int>> pq;
    pq.push({0, src});
    
    while(!pq.empty()){
        int str = pq.top().second;
        int v = -pq.top().first;
        pq.pop();
        if(value[src][str] >= v){
            value[src][str] = v;
            for(int i = 0 ; i < adj[str].size() ; i++){
                int dest = adj[str][i].first;
                int len = v + adj[str][i].second;
                if(value[src][dest] > len){
                    pq.push({-len, dest});
                    value[src][dest] = len;
                }
            }
        }
    }

}

int main() {
    
    cin >> N >> M >> R;
    
    for(int i = 1 ; i <= N ; i++){
        cin >> items[i];
    }
    
    for(int i = 0; i < R ; i++){
        int a, b, len;
        cin >> a >> b >> len;
        adj[a].push_back(make_pair(b, len));
        adj[b].push_back(make_pair(a, len));
    }
    
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            value[i][j] = INF;
        }
    }
    
    for(int i = 1; i <= N; i++){
        dijkstra(i);
    }
    
    int max = -987654321;
    for(int i = 1 ; i <= N ; i++){
        int dist = 0;
        for(int j = 1; j <= N ; j++){
            if(value[i][j] <= M)
                dist += items[j];
        }
        if(max < dist){
            max = dist;
        }
    }
    
    cout << max;
    
    
    return 0;
}
