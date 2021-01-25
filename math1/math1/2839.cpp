//
//  2839.cpp
//  math1
//
//  Created by 임수정 on 24/02/2020.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    
    int cnt = 0;
    int i = 0;
    while(N>0){
        if(N%5 == 0){
            cnt = i + N/5;
            break;
        }
        N -= 3;
        i++;
    }
    if(N==0){
        cnt = i;
    }
    if(N<0){
        cnt = -1;
    }
    cout << cnt;
    
    return 0;
}
