//
//  9020.cpp
//  math2
//
//  Created by 임수정 on 03/03/2020.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
using namespace std;
int primes[1230];
void getPrime(int n){
    bool isprime[n+1];
    //isprime 배열 초기화
    for(int i = 2 ; i <= n ; i++)
        isprime[i] = true;
    isprime[1] = false;
    
    for(int d = 2 ; d <= n/2 ; d++){
        if(!isprime[d])
            continue;
        for(int i = d+d ; i <= n ; i += d)
            isprime[i] = false;
    }
    int j = 0;
    for(int i = 1 ; i <= n ; i++){
        if(isprime[i]){
            primes[j++] = i;
        }
    }
}

void getAns(int n, int ans[][2], int T){
    int a, b;
    int aindex, bindex;
    for(int gap = 0 ; gap <= n ; gap++){
        aindex = 0;
        bindex = gap;
        do{
            a = primes[aindex++];
            b = primes[bindex++];
            if(a+b == n){
                ans[T][0] = a;
                ans[T][1] = b;
                return;
            }
        }while(a+b <= n);
    }
}
int main(){
    getPrime(10000);
    
    int T;
    cin >> T;
    int ans[T][2];
    for(int i = 0 ; i < T ; i++){
        int n;  //더해서 n이되는 소수
        cin >> n;
        
        getAns(n, ans, i);
    }
    for(int i = 0 ; i < T ; i++){
        cout << ans[i][0] << " " << ans[i][1] << "\n";
    }
    return 0;
}
