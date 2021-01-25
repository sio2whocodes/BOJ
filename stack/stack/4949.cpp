//
//  4949.cpp
//  stack
//
//  Created by 임수정 on 2020/08/06.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;
class Stack{
public:
    int size;
    char* stack;
    Stack(){
        size = 0;
        stack = new char[101];
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
    string cstr;
    bool isVPS;
    while(1){
        isVPS = true;
        Stack s = Stack();
        getline(cin, cstr);
        if(cstr[0] == '.')
            break;
        for(int i = 0 ; i < cstr.size() ; i++){
            if(cstr[i] == '(' || cstr[i] == '['){
                s.push(cstr[i]);
            }
            else if(cstr[i] == ')'){
                if(s.pop() != '('){
                    isVPS = false;
                    break;
                }
            }
            else if(cstr[i] == ']'){
                if(s.pop() != '['){
                    isVPS = false;
                    break;
                }
            }
        }
        
        if(!s.isEmpty())
            isVPS = false;
        if(isVPS)
            cout << "yes\n";
        else
            cout << "no\n";
    }
    return 0;
}
