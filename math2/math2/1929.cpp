//
//  1929.cpp
//  math2
//
//  Created by 임수정 on 29/02/2020.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int M, N;
    cin >> M >> N;
    
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
        if(isprime[i]){
            cout << i << "\n";
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
