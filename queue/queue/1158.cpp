//
//  main.cpp
//  queue
//
//  Created by 임수정 on 2021/02/25.
//
//https://sio2whocode.tistory.com/98
//https://www.acmicpc.net/problem/1158

#include <iostream>
#include <queue>
using namespace std;
bool visit[5000];
int main(){
    int n,k;
    cin >> n >> k;
    queue<int> q;
    int cnt = 0;
    int i = 0;
    while(q.size()!=n){
        if(!visit[i]){
            if(++cnt == k){
                q.push(i+1);
                visit[i] = true;
                cnt = 0;
            }
        }
        i = (i+1)%n;
    }
    cout << "<";
    while(q.size() != 1){
        cout << q.front() << ", ";
        q.pop();
    }
    cout << q.front() << ">";
    
    
    return 0;
}
