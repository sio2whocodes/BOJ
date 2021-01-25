//
//  1978.cpp
//  math2
//
//  Created by 임수정 on 29/02/2020.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
using namespace std;

bool isPrime(int n){
    if(n == 1)
        return false;
    for(int d = 2 ; d <= n/2 ; d++){
        if(n % d == 0)
            return false;
    }
    return true;
}

int main(){
    int T;
    cin >> T;
    
    int cnt = 0;
    for(int i = 0 ; i < T ; i++){
        int n;
        cin >> n;
        if(isPrime(n))
            cnt++;
    }
    cout << cnt;
    return 0;
}
