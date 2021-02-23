//
//  1753.cpp
//  Dijkstra
//
//  Created by 임수정 on 2021/02/23.
//
//https://sio2whocode.tistory.com/96
//https://www.acmicpc.net/problem/1753

#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int distances[20001];
int INF = 222222;
vector<vector<pair<int,int>>> weights;
int V,E,start;
void dijkstra(int v){
    priority_queue<pair<int,int>> q;
    q.push(make_pair(0, v));
    while(!q.empty()){
        //가장 가까운 next node 찾기
        int minDistance = -q.top().first;
        int next = q.top().second;
        q.pop();
        if(distances[next] < minDistance){
            continue;
        }
        //distance update
        for(int i = 0 ; i < weights[next].size() ; i++){
            int there = weights[next][i].first;
            int ndist = weights[next][i].second;
            if(distances[there] > minDistance + ndist){
                distances[there] = minDistance + ndist;
                q.push(make_pair(-distances[there], there));
            }
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> V >> E >> start;
    start--;
    weights = vector<vector<pair<int,int>>>(V,vector<pair<int,int>>());
    
    for(int i = 0 ; i < E ; i++){
        int s,e,w;
        cin >> s >> e >> w;
        weights[s-1].push_back(make_pair(e-1, w));
    }
    
    for(int i = 0 ; i < V ; i++){
        distances[i] = INF;
    }
    distances[start] = 0;
    dijkstra(start);
    for(int i = 0 ; i < V ; i++){
        if(distances[i] == INF){
            cout << "INF\n";
        }else{
            cout << distances[i] << "\n";
        }
    }
    return 0;
}
