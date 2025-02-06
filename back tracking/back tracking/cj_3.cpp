//
//  cj_3.cpp
//  back tracking
//
//  Created by sujeong on 11/1/24.
//  Copyright © 2024 임수정. All rights reserved.
//

#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>

using namespace std;
vector<vector<int>> ms;

void dfs(vector<int> arr, int m, int c, vector<int> cm, int n){
    if(cm.size() == m){
        ms.push_back(cm);
        return;
    }
    if(c == n){
        return;
    }
    
    if(arr[c] == 1){
        vector<int> _cm = cm;
        _cm.push_back(c);
        dfs(arr, m, c+1, _cm, n);
    }
    
    dfs(arr, m, c+1, cm, n);
}

int main() {
    int answer = 0;
    vector<int> arr = {1,1,-1,1,1,-1,-1,1};
    int n = arr.size();
    int m = 3;
    vector<int> cm;
    dfs(arr, m, 0, cm, n);
    
    for(int i = 0 ; i < ms.size() ; i++){
        // 오른쪽으로 돌린거
        vector<int> new_arr = arr;
        // 탈출인원 계산
        int cnt = 0;
        vector<int> supervise(n, -1); // 내가 감시하고 있는 사람
        unordered_map<int, int> um; // 나를 감시하고 있는 사람의 수
        // 얘네 만들기
        for(int j = 0 ; j < n ; j++){
            if(new_arr[j] != 0){
                supervise[j] = (j+new_arr[j]+n) % n;
                um[supervise[j]]++;
            }
        }
        // 처음 탈출 사람 큐에 넣기
        queue<int> q;
        for(int j = 0 ; j < n ; j++){
            if(um[j] == 0){
                // 탈출
                q.push(j);
            }
        }
        // 최대 탈출인원 구하기 dfs
        while(!q.empty()){
            int now = q.front();
            q.pop();
            cnt++;
            if(--um[supervise[now]] == 0){
                q.push(supervise[now]);
            }
        }
        
        if(answer < cnt){
            answer = cnt;
        }
    }
    
    cout << answer;
    
    
    return 0;
}
