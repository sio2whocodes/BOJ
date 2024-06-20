//
//  18406.cpp
//  implement
//
//  Created by sujeong on 2024/06/20.
//
//https://www.acmicpc.net/problem/18406

#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    
    int front = 0;
    for(int i = 0; i < s.length()/2; i++){
        front += s[i]-'0';
    }
    
    int back = 0;
    for(int i = int(s.length()/2) ; i < s.length() ; i++){
        back += s[i]-'0';
    }
    
    front == back ? cout << "LUCKY" << endl : cout << "READY" << endl;
    
    return 0;
}
