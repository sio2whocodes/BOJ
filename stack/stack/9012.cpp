//
//  9012.cpp
//  stack
//
//  Created by 임수정 on 2020/08/04.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
using namespace std;
class Stack{
public:
    int size;
    char* stack;
    Stack(){
        size = 0;
        stack = new char[50];
    }
    void push(char ch){
        stack[size++] = ch;
    }
    char pop(){
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
    char top(){
        if(isEmpty()){
            return -1;
        }
        else{
            return stack[size-1];
        }
    }
};
int main(){
    int T;
    cin >> T;
    char cstr[50];
    bool isVPS;
    for(int i = 0 ; i < T ; i++){
        isVPS = true;
        Stack s = Stack();
        cin >> cstr;
        for(int i = 0 ; cstr[i] != '\0' ; i++){
            if(cstr[i] == '(')
                s.push(cstr[i]);
            else if(cstr[i] == ')'){
                if(s.pop() != '('){
                    isVPS = false;
                    break;
                }
            }
        }
        if(!s.isEmpty())
            isVPS = false;
        if(isVPS)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
