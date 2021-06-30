//
//  11286.cpp
//  priority_queue
//
//  Created by 임수정 on 2021/06/29.
//
//https://www.acmicpc.net/problem/11286
//https://sio2whocode.tistory.com/117

#include <iostream>
#include <queue>
#include <vector>
#include <cmath>
using namespace std;

struct cmp{
    bool operator()(int a, int b){
        if(abs(a) == abs(b))
            return a > b;
        else
            return abs(a) > abs(b);
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    priority_queue<int, vector<int>, cmp> heap;

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
