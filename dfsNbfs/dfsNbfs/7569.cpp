//
//  7569.cpp
//  dfsNbfs
//
//  Created by 임수정 on 2021/02/17.
//
//https://sio2whocode.tistory.com/92
//https://www.acmicpc.net/problem/7569

#include <iostream>
#include <queue>
using namespace std;
int n,m,h;
int map[105][105][105];
int visit[105][105][105];
int dr[6] = {0,0,1,-1,0,0};
int dc[6] = {1,-1,0,0,0,0};
int dh[6] = {0,0,0,0,1,-1};

bool isFull(){
    for(int k = 0 ; k < h ; k++){
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(map[k][i][j] == 0){
                    return false;
                }
            }
        }
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> m >> n >> h;
    queue<vector<int>> q;
    int input;
    for(int k = 0 ; k < h ; k++){
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                cin >> input;
                map[k][i][j] = input;
                if(input == 1){
                    q.push({k,i,j});
                }
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
        int hereH = q.front()[0];
        int hereR = q.front()[1];
        int hereC = q.front()[2];
        q.pop();
        pushcnt--;
        visit[hereH][hereR][hereC] = true;
        for(int i = 0 ; i < 6 ; i++){
            int thereH = hereH + dh[i];
            int thereR = hereR + dr[i];
            int thereC = hereC + dc[i];
            if(thereH >= 0 && thereH < h && thereR >= 0 && thereC >= 0 && thereR < n && thereC < m && map[thereH][thereR][thereC] == 0 && !visit[thereH][thereR][thereC]){
                q.push({thereH,thereR,thereC});
                map[thereH][thereR][thereC] = 1;
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
