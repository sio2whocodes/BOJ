//
//  15663.cpp
//  implement
//
//  Created by sujeong on 2024/06/22.
//

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

vector<int> num;
set<vector<int>, less<vector<int>>> result;

void recursive(int n, int m, vector<int> arr, vector<bool> visit){
    int size = arr.size();
    if(size == m){
        result.insert(arr);
    } else {
        for(int i = 0; i < num.size(); i++){
            if(!visit[i]){
                vector<int> _arr = arr;
                _arr.push_back(num[i]);
                vector<bool> _visit = visit;
                _visit[i] = true;
                recursive(n, m, _arr, _visit);
            }
        }
    }
}

int main(){
    
    int N, M;
    cin >> N >> M;
        
    for(int i = 0; i < N; i++){
        int n;
        cin >> n;
        num.push_back(n);
    }
    
    sort(num.begin(), num.end());

    vector<int> arr;
    vector<bool> visit(N,false);
    recursive(N, M, arr, visit);

    for(const auto& s: result) {
        for(int n: s)
            cout << n << " ";
        cout << "\n";
    }
    
    return 0;
}
