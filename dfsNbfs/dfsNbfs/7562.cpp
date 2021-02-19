//
//  7562.cpp
//  dfsNbfs
//
//  Created by 임수정 on 2021/02/17.
//
//https://www.acmicpc.net/problem/7562
//https://sio2whocode.tistory.com/94

#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int dr[8] = {-1,-1,-2,-2,1,1,2,2};
int dc[8] = {-2,2,-1,1,-2,2,-1,1};

int main(){
    int tc;
    cin >> tc;
    for(int t = 0 ; t < tc ; t++){
        int l, qr, qc, dsr, dsc;
        cin >> l >> qr >> qc >> dsr >> dsc;
        queue<pair<int,int>> q;
        vector<vector<bool>> visit(l,vector<bool>(l,false));
        vector<vector<int>> distances(l,vector<int>(l,0));
        visit[qr][qc] = true;
        q.push(make_pair(qr, qc));
        while(!q.empty() && !visit[dsr][dsc]){
            int hereR = q.front().first;
            int hereC = q.front().second;
            q.pop();
            for(int i = 0 ; i < 8 ; i++){
                int thereR = hereR + dr[i];
                int thereC = hereC + dc[i];
                if(thereC >= 0 && thereR >= 0 && thereR < l && thereC < l && !visit[thereR][thereC]){
                    visit[thereR][thereC] = true;
                    distances[thereR][thereC] = distances[hereR][hereC] + 1;
                    q.push(make_pair(thereR, thereC));
                }
            }
        }
        cout << distances[dsr][dsc] << "\n";
    }
    return 0;
}
