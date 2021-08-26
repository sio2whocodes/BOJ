//
//  1068.cpp
//  Tree
//
//  Created by 임수정 on 2021/08/26.
//

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(){
    //init & input
    int n;
    cin >> n;
    
    vector<vector<int>> adj(n);
    int parent[n];
    int leaf = 0;
    
    int node;
    for(int i = 0 ; i < n ; i++){
        cin >> node;
        parent[i] = node;
        if(node != -1){
            adj[node].push_back(i);
        }
    }

    int remove;
    cin >> remove;
    
    //process
    for(int i = 0 ; i < n ; i++){
        if(adj[i].empty())
            leaf++;
    }
    
    queue<int> q;
    q.push(remove);
    if(parent[remove] != -1 && adj[parent[remove]].size() == 1){
        leaf++;
    }
    
    while(!q.empty()){
        int parent = q.front();
        q.pop();
        if(adj[parent].empty()){
            leaf--;
        }
        for(int i = 0 ; i < adj[parent].size() ; i++){
            q.push(adj[parent][i]);
        }
    }
    
    //output
    cout << leaf;
    
    return 0;
}
