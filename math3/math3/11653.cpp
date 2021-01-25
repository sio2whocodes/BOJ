//
//  main.cpp
//  math3
//
//  Created by 임수정 on 2020/07/14.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    
    int d = 2;
    while(N > 1){
        while(N%d == 0){
            cout << d << "\n";
            N = N/d;
        }
        d++;
    }
    return 0;
}
