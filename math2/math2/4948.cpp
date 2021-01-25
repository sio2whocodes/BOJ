//
//  4948.cpp
//  math2
//
//  Created by 임수정 on 02/03/2020.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
using namespace std;

int PrimeNum(int n){
    int M = n+1;
    int N = 2*n;
    bool isprime[N+1];
    //isprime 배열 초기화
    for(int i = 2 ; i <= N ; i++)
        isprime[i] = true;
    isprime[1] = false;
    
    for(int d = 2 ; d <= N/2 ; d++){
        if(!isprime[d])
            continue;
        for(int i = d+d ; i <= N ; i += d)
            isprime[i] = false;
    }
    int cnt = 0;
    for(int i = M ; i <= N ; i++){
        if(isprime[i])
            cnt++;
    }
    return cnt;
}
int main(){
    int n;
    cin >> n;
    do{
        int cnt = PrimeNum(n);
        cout << cnt << "\n";
        cin >> n;
    }while(n != 0);
    return 0;
}
