//
//  11725_2024.cpp
//  Tree
//
//  Created by sujeong on 2024/06/24.
//

#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> family_tree(100001);
vector<int> parents(100001, 0);

void find_child(int me){
    for(int child: family_tree[me]){
        if(parents[child] == 0){
            parents[child] = me;
            find_child(child);
        }
    }
}

int main() {
    // input
    int N;
    cin >> N;

    int s,e;
    for(int i = 0 ; i < N-1 ; i++){
        cin >> s >> e;
        family_tree[s].push_back(e);
        family_tree[e].push_back(s);
    }
    
    parents[1] = 1;
    
    // process
    find_child(1);
    // output
    for(int i = 2; i <= N; i++){
        cout << parents[i] << "\n";
    }
    
    return 0;
}
