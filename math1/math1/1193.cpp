//
//  1193.cpp
//  math1
//
//  Created by 임수정 on 24/02/2020.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
using namespace std;

int n = 1;
int an = 0;
int An(int n){
    return (n*n - n)/2 + 1;
}
int main(){
    int N;
    cin >> N;
    
    //구간 알아보기
    while(1){
        an = An(n);
        if(an > N){
            break;
        }
        n++;
    }
    n--; //구간 이자 구간 내 원소 수
    
    int rindex = N - (An(n) -1);
    if(n%2 == 0){
        cout << rindex << "/" << n-rindex+1;
    }else{
        cout << n-rindex+1 << "/" << rindex;
    }
    return 0;
}
