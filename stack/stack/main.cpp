//
//  main.cpp
//  stack
//
//  Created by 임수정 on 2020/07/22.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

class Stack{
public:
    int size;
    int* stack;
    Stack(){
        size = 0;
        stack = new int[10000];
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
    Stack s = Stack();
    int n,x;
    cin >> n;
    string com;
    for(int i = 0 ; i < n ; i++){
        cin >> com;
        if(com.compare("push") == 0){
            cin >> x;
            s.push(x);
        }else if(com.compare("pop") == 0){
            cout << s.pop() << "\n";
        }else if(com.compare("size") == 0){
            cout << s.getSize() << "\n";
        }else if (com.compare("empty") == 0){
            cout << (int)s.isEmpty() << "\n";
        }else if(com.compare("top") == 0){
            cout << s.top() << "\n";
        }
    }
    return 0;
}
