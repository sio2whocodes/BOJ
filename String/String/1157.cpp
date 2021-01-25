//
//  1157.cpp
//  String
//
//  Created by 임수정 on 20/02/2020.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    char str[1000000];
    cin >> str;
    int alpha[26];
    for(int i = 0 ; i < 26 ; i++)
        alpha[i] = 0;
    
    for(int i = 0 ; str[i] != '\0'; i++){
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 'a'-'A';
        alpha[str[i]-'A']++;
    }
    
    int cnt = 1;
    int max = alpha[0];
    int maxIndex = 0;
    for(int i = 1 ; i < 26 ; i++){
        if(max < alpha[i]){
            max = alpha[i];
            maxIndex = i;
            cnt = 1;
        }
        else if(max == alpha[i]){
            max = alpha[i];
            maxIndex = i;
            cnt++;
        }
    }
  
    char ch = maxIndex+'A';
    if(cnt == 1)
        cout << ch;
    else
        cout << "?";
    
    return 0;
}
