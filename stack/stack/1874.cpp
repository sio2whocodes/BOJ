//
//  1874.cpp
//  stack
//
//  Created by 임수정 on 2020/08/07.
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
    int n;
    cin >> n;
    Stack s = Stack(n);
    
    char result[2*n];
    int cnt = 0;
    int num;
    for(int i = 1, a = 1 ; i <= n ; i++){
        cin >> num;
        while(s.isEmpty() || s.top() < num){
            s.push(a++);
            result[cnt++] = '+';
        }
        if(s.top() == num){
            s.pop();
            result[cnt++] = '-';
        }
        if(s.top() > num){
            cout << "NO";
            return 0;
        }
    }
    for(int i = 0 ; i < 2*n ; i++)
        cout << result[i] << "\n";
    return 0;
}
