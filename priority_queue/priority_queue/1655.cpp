//
//  1655.cpp
//  priority_queue
//
//  Created by 임수정 on 2021/06/29.
//
//https://sio2whocode.tistory.com/124
//https://www.acmicpc.net/problem/1655

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    priority_queue<int, vector<int>, greater<>> min_heap;
    priority_queue<int, vector<int>, less<>> max_heap;

    int N;
    cin >> N;
    
    for(int i = 0 ; i < N ; i++){
        int n;
        cin >> n;
        //n input
        if(max_heap.empty()){
            max_heap.push(n);
        }else{
            if(n < max_heap.top()){
                max_heap.push(n);
            }else{
                min_heap.push(n);
            }
        }
        
        if(max_heap.size() - min_heap.size() == 2){
            min_heap.push(max_heap.top());
            max_heap.pop();
        }else if(min_heap.size() - max_heap.size() == 2){
            max_heap.push(min_heap.top());
            min_heap.pop();
        }
        //peek
        if(max_heap.size() == min_heap.size() || min_heap.size() < max_heap.size()){
            cout << max_heap.top() << "\n";
        }else if(max_heap.size() < min_heap.size()){
            cout << min_heap.top() << "\n";
        }
    }
    
    return 0;
}

