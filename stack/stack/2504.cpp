//
//  2504.cpp
//  stack
//
//  Created by sujeong on 8/1/24.
//  Copyright © 2024 임수정. All rights reserved.
//

#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
    string str;
    cin >> str;
    
    int tmp = 1;
    int ans = 0;
    stack<char> stack;

    for(int i = 0 ; i < str.size(); i++) {
        if (str[i] == '(') {
            stack.push('(');
            tmp *= 2;
        } else if (str[i] == '[') {
            stack.push('[');
            tmp *= 3;
        } else if (str[i] == ')') {
            if (stack.empty() || stack.top() != '('){
                ans = 0;
                break;
            } else if (str[i-1] == '(') {
                ans += tmp;
                tmp /= 2;
                stack.pop();
            } else {
                tmp /= 2;
                stack.pop();
            }
        } else {
            if(stack.empty() || stack.top() != '[') {
                ans = 0;
                break;
            } else if (str[i-1] == '[') {
                ans += tmp;
                tmp /= 3;
                stack.pop();
            } else {
                tmp /= 3;
                stack.pop();
            }
        }
    }
    
    if(!stack.empty())
        ans = 0;
    
    cout << ans;
    
    return 0;
}
