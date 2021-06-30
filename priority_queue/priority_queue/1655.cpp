//
//  1655.cpp
//  priority_queue
//
//  Created by 임수정 on 2021/06/29.
//

#include <iostream>
#include <queue>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    priority_queue<int, vector<int>, greater<>> heap;

    int t;
    cin >> t;
    
    int x;
    for(int i = 0 ; i < t ; i++){
        cin >> x;
        heap.push(x);
//        heap.
    }
    
    return 0;
}

