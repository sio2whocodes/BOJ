//
//  11000.cpp
//  Greedy
//
//  Created by 임수정 on 2021/07/25.
//  Copyright © 2021 임수정. All rights reserved.
//

#include <iostream>
#include <queue>
using namespace std;
struct comp{
    bool operator()(pair<int,int> a, pair<int, int> b){
        if(a.first == b.first){
            return a.second > b.second;
        }else{
            return a.first > b.first;
        }
    }
};

int main(){
    //init & input
    int N;
    cin >> N;
    
    priority_queue<pair<int, int>, vector<pair<int, int>>, comp> pq;
    priority_queue<int, vector<int>, greater<>> cq;

    int a,b;
    for(int i = 0 ; i < N ; i++){
        cin >> a >> b;
        pq.push(make_pair(a, b));
    }
    
    //process
    cq.push(pq.top().second);
    pq.pop();
    
    while(!pq.empty()){
        if(pq.top().first >= cq.top()){
            cq.pop();
            cq.push(pq.top().second);
            pq.pop();
        }else{
            cq.push(pq.top().second);
            pq.pop();
        }
    }
    
    //output
    cout << cq.size() << "\n";
    
    return 0;
}
