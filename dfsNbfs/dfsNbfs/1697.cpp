//
//  1697.cpp
//  dfsNbfs
//
//  Created by 임수정 on 2021/02/17.
//
//https://sio2whocode.tistory.com/93
//https://www.acmicpc.net/problem/1697

#include <iostream>
#include <queue>
using namespace std;
int distances[100001];
bool visit[100001];
queue<int> q;

int main(){
    int x,k;
    cin >> x >> k;
    q.push(x);
    visit[x] = true;
    while(!q.empty() && !visit[k]){
        int here = q.front();
        cout << "pop:"<<here << endl;
        q.pop();
        //
        if(here-1 >= 0 && !visit[here-1] && here-1 <= 100001){
            q.push(here-1);
            cout << here-1 << endl;
            visit[here-1] = true;
            distances[here-1] = distances[here] + 1;
        }
        if(!visit[here+1] && here+1 <= 100001){
            q.push(here+1);
            cout << here+1 << endl;
            visit[here+1] = true;
            distances[here+1] = distances[here] + 1;
        }
        if(!visit[here*2] && here*2 <= 100001){
            q.push(here*2);
            cout << here*2 << endl;
            visit[here*2] = true;
            distances[here*2] = distances[here] + 1;
        }
    }
    cout << distances[k];
    return 0;
}
