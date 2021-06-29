//
//  main.cpp
//  priority_queue
//
//  Created by 임수정 on 2021/06/29.
//
//https://sio2whocode.tistory.com/115
//https://www.acmicpc.net/problem/11279
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    priority_queue<int, vector<int>, less<int>> heap;
    int t;
    cin >> t;
    
    int x;
    for(int i = 0 ; i < t ; i++){
        cin >> x;
        if(x == 0){
            if(heap.empty()){
                cout << "0\n";
            }else{
                cout << heap.top() << "\n";
                heap.pop();
            }
        }else{
            heap.push(x);
        }
    }
    
    return 0;
}
