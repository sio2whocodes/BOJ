//
//  1927.cpp
//  priority_queue
//
//  Created by 임수정 on 2021/06/29.
//
//https://www.acmicpc.net/problem/1927
//https://sio2whocode.tistory.com/116

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct cmp{
    bool operator()(int a, int b){
        return a > b; //주의 greater
    }
};


int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    priority_queue<int, vector<int>, cmp> heap;
//    priority_queue<int, vector<int>, greater<>> heap;

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
    
}
