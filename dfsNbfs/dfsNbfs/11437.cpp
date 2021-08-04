//
//  11437.cpp
//  dfsNbfs
//
//  Created by 임수정 on 2021/08/04.
//

#include <iostream>
#include <vector>
using namespace std;

//int adj[50000][50000];
vector<vector<int>> adj(50001);

int main(){
    //input & init
    int N;
    cin >> N;
    
    for(int i = 0 ; i < N-1 ; i++){
        int p, c;
        cin >> p >> c;
        adj[p].push_back(c);
    }
    
    for(int i = 1 ; i <= N ; i++){
        cout << i << ">";
        for(int j = 0 ; j < adj[i].size() ; j++){
            cout << adj[i][j] << ", ";
        }
        cout << "\n";
    }
    
    
    
    
    return 0;
}
