//
//  9935.cpp
//  stack
//
//  Created by sujeong on 2024/07/03.
//  Copyright © 2024 임수정. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    string str;
    string bomb;
    
    cin >> str >> bomb;
    
    vector<char> stack;
    
    int strlen = str.length();
    for(int i = 0 ; i < strlen ; i++){
        stack.push_back(str[i]);
        //validate
        if(stack.size() >= bomb.length()){
            string candidate(stack.end()-bomb.length(), stack.end());
            if(candidate == bomb){
                int bomblen = bomb.length();
                for(int j = 0 ; j < bomblen ; j++)
                    stack.pop_back();
            }
        }
    }
    
    if(stack.empty()){
        cout << "FRULA";
    }else{
        string result(stack.begin(), stack.end());
        cout << result;
    }
    
    return 0;
}
