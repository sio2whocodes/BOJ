//
//  main.cpp
//  GameTheory
//
//  Created by 임수정 on 2021/08/09.
//
//https://sio2whocode.tistory.com/137
#include <iostream>
using namespace std;

int main(){
    //input
    long long N;
    cin >> N;
    
    //process & output
    cout << (N & 1 ? "SK\n" : "CY\n");
    return 0;
}
