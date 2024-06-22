//
//  15654.cpp
//  implement
//
//  Created by sujeong on 2024/06/22.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> num;
vector<vector<int>> result;

void recursive(int n, int m, vector<int> arr, vector<bool> visit){
    int size = arr.size();
    if(size == m){
        result.push_back(arr);
    } else {
        for(int i = 0; i < n; i++){
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
    
    // input
    
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
    
    int len = result.size();
    for(int i = 0 ; i < len; i++){
        for(int j = 0 ; j < M ; j++){
            cout << result[i][j] << " ";
        }
        cout << "\n";
    }
    
    
    return 0;
}
