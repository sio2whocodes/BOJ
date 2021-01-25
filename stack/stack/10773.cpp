//
//  10773.cpp
//  stack
//
//  Created by 임수정 on 2020/08/03.
//  Copyright © 2020 임수정. All rights reserved.
//
#include <iostream>
using namespace std;

class Stack{
public:
    int size;
    int* stack;
    Stack(int maxSize){
        size = 0;
        stack = new int[maxSize];
    }
    void push(int n){
        stack[size++] = n;
    }
    int pop(){
        if(isEmpty()){
            return -1;
        }
        else{
            return stack[--size];
        }
    }
    int getSize(){
        return size;
    }
    bool isEmpty(){
        if(size == 0)
            return true;
        else
            return false;
    }
    int top(){
        if(isEmpty()){
            return -1;
        }
        else{
            return stack[size-1];
        }
    }
};
int main(){
    int k, num, sum = 0;
    cin >> k;
    Stack s = Stack(k);
    for(int i = 0 ; i < k ; i++){
        cin >> num;
        if(num == 0){
            s.pop();
        }
        else{
            s.push(num);
        }
    }
    while(!s.isEmpty()){
        sum += s.pop();
    }
    cout << sum;
    return 0;
}

