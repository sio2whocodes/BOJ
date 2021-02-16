//
//  7576.cpp
//  dfsNbfs
//
//  Created by 임수정 on 2021/02/16.
//
//https://sio2whocode.tistory.com/91
//https://www.acmicpc.net/problem/7576

#include <iostream>
#include <queue>
using namespace std;
int n,m;
int map[1005][1005];
int visit[1005][1005];
int dr[4] = {0,0,1,-1};
int dc[4] = {1,-1,0,0};

bool isFull(){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(map[i][j] == 0){
                return false;
            }
        }
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> m >> n;
    queue<pair<int,int>> q;
    int input;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin >> input;
            map[i][j] = input;
            if(input == 1){
                q.push(make_pair(i, j));
            }
        }
    }
    int cnt = 0;
    if(isFull()){
        cout << cnt;
        return 0;
    }
    long pushcnt = q.size();
    while(!q.empty()){
        int hereR = q.front().first;
        int hereC = q.front().second;
        q.pop();
        pushcnt--;
        visit[hereR][hereC] = true;
        for(int i = 0 ; i < 4 ; i++){
            int thereR = hereR + dr[i];
            int thereC = hereC + dc[i];
            if(thereR >= 0 && thereC >= 0 && thereR < n && thereC < m && map[thereR][thereC] == 0 && !visit[thereR][thereC]){
                q.push(make_pair(thereR,thereC));
                map[thereR][thereC] = 1;
            }
        }
        if(pushcnt == 0){
            cnt++;
            pushcnt = q.size();
        }
    }
    cout << (isFull() ? cnt-1 : -1);
    return 0;
}
