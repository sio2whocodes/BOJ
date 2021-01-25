//
//  5622.cpp
//  String
//
//  Created by 임수정 on 21/02/2020.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int num[10] = {0,2,3,4,5,6,7,8,9,0};
    
    char str[15];
    cin >> str;
    
    char a[15];
    for(int i = 0 ; str[i] != '\0' ; i++){
        switch(str[i]){
            case'A':
            case'B':
            case'C':
                a[i] = '2';
                break;
            case'D':
            case'E':
            case'F':
                a[i] = '3';
                break;
            case'G':
            case'H':
            case'I':
                a[i] = '4';
                break;
            case'J':
            case'K':
            case'L':
                a[i] = '5';
                break;
            case'M':
            case'N':
            case'O':
                a[i] = '6';
                break;
            case'P':
            case'Q':
            case'R':
            case'S':
                a[i] = '7';
                break;
            case'T':
            case'U':
            case'V':
                a[i] = '8';
                break;
            case'W':
            case'X':
            case'Y':
            case'Z':
                a[i] = '9';
                break;
            default:
                break;
        }
    }
    
    int sum = 0;
    for(int i = 0 ; str[i]!='\0' ;i++){
        sum += num[a[i]-'0'];
    }
    cout << sum;
    return 0;
}
