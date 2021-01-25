//
//  2581.cpp
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
    int M, N;
    cin >> M >> N;
    
    int sum = 0;
    int min = 0;
    for(int i = M ; i <= N ; i++){
        if(isPrime(i)){
            if(sum == 0)
                min = i;
            sum += i;
        }
    }
    if(sum == 0){
        cout << -1 <<endl;
        return 0;
    }
    cout << sum << endl;
    cout << min << endl;
    return 0;
}
