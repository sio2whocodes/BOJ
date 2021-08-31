//
//  9660.cpp
//  GameTheory
//
//  Created by 임수정 on 2021/08/31.
//https://www.acmicpc.net/problem/9660
//https://sio2whocode.tistory.com/148

#include <iostream>
using namespace std;

int main(){
    //input
    long long N;
    cin >> N;
    
    //process & output
    if ( N % 7 == 2 || N % 7 == 0){
        cout << "CY\n";
    }else{
        cout << "SK\n";
    }
    return 0;
}

