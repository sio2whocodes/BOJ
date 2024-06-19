//
//  3190.cpp
//  implement
//
//  Created by sujeong on 2024/06/19.
//

#include <iostream>
#include <vector>
#include <queue>
#include <map>
using namespace std;

struct Point {
    int r;
    int c;
};

int main(){
    // input
    
    int N, K;
    cin >> N >> K;
    
    vector<vector<int>> adj(N+1, vector<int>(N+1,0));
    
    //사과
    for(int i = 0; i < K; i++){
        int r,c;
        cin >> r >> c;
        adj[r][c] = 2;
    }
    
    int L;
    cin >> L;
    map<int, char> m;
    for(int i = 0; i < L; i++){
        int x;
        char c;
        cin >> x >> c;
        m.insert({x, c});
    }
    
    adj[1][1] = 1;
    int dr[4] = {0,1,0,-1};
    int dc[4] = {1,0,-1,0};
    //왼 L 오 D
    //D -> +1 % 4, L -> +3 % 4
    int cur_dir_idx = 0;
    int cr = 1;
    int cc = 1;
    
    //꼬리
    queue<Point> tail;
    Point p;
    p.r = 1;
    p.c = 1;
    tail.push(p);
    
    int result = 0;
    int s = 0;
    while(1){
        s++;
        
        cr += dr[cur_dir_idx];
        cc += dc[cur_dir_idx];
        
        //생존 확인
        if(cr > N || cc > N || cr < 1 || cc < 1 || adj[cr][cc] == 1){
            result = s;
            break;
        }
        
        //사과 확인
        if(adj[cr][cc] == 0){ //없
            Point t = tail.front();
            adj[t.r][t.c] = 0;
            tail.pop();
        }
        adj[cr][cc] = 1;
        p.r = cr;
        p.c = cc;
        tail.push(p);
        
        // 맵 확인 -> 방향 전환
        if(!m.empty() && m.begin()->first == s){
            char d = m.begin()->second;
            if(d == 'L'){
                cur_dir_idx = (cur_dir_idx+3) % 4;
            }else{
                cur_dir_idx = (cur_dir_idx+1) % 4;
            }
            m.erase(m.begin());
        }
    }
    
    cout << result;
    
    return 0;
}
