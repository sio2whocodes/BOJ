//
//  2908.cpp
//  String
//
//  Created by 임수정 on 20/02/2020.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    char numch1[4], numch2[4];
    cin >> numch1 >> numch2;
    
    int num1 = 0;
    int num2 = 0;
    for(int i = 0 ; i < 3 ; i++){
        int num = numch1[i]-'0';
        for(int j = 0 ; j < i ; j++){
            num *= 10;
        }
        num1 += num;
    }
    
    for(int i = 0 ; i < 3 ; i++){
        int num = numch2[i]-'0';
        for(int j = 0 ; j < i ; j++){
            num *= 10;
        }
        num2 += num;
    }
    
    if(num1 > num2){
        cout << num1;
    }else
        cout << num2;
    return 0;
}
