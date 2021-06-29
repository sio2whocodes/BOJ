//
//  11279-2.cpp
//  priority_queue
//
//  Created by 임수정 on 2021/06/29.
//

//https://sio2whocode.tistory.com/115
//https://www.acmicpc.net/problem/11279
#include <iostream>
using namespace std;

int heap[100001];
int heapCount = -1;

void push(int n){
    heap[++heapCount] = n;
    
    int child = heapCount;
    int parent = child/2;
    
    while(child > 0 && heap[child] > heap[parent]){
        int temp = heap[child];
        heap[child] = heap[parent];
        heap[parent] = temp;
        
        child = parent;
        parent = child/2;
    }
}

void print(){
    for(int i = 0 ; i <= heapCount ; i++){
        cout << heap[i] << endl;
    }
}

int pop(){
    int top = heap[0];
    
    heap[0] = heap[heapCount--];
        
    int parent = 0;
    int child = 1;
    
    if(child+1 <= heapCount)
        child = (heap[child]>heap[child+1]) ? child : child+1;
    
    while(parent <= heapCount && heap[parent] < heap[child]) {
        int temp = heap[parent];
        heap[parent] = heap[child];
        heap[child] = temp;
        
        parent = child;
        child = parent*2+1;
        if(child+1 <= heapCount)
            child = (heap[child]>heap[child+1]) ? child : child+1;
    }
    return top;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    int x;
    for(int i = 0 ; i < t ; i++){
        cin >> x;
        if(x == 0){
            if(heapCount == -1){
                cout << "0\n";
            }else{
                cout << pop() << "\n";
            }
        }else{
            push(x);
        }
    }
    return 0;
}
