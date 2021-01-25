//
//  3036.cpp
//  math3
//
//  Created by 임수정 on 2020/07/28.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
using namespace std;

int getGcd(int a, int b){
    for(int d = min(a,b) ; d >= 1 ; d--){
        if(a%d == 0 && b%d == 0){
            return d;
        }
    }
    return 1;
}
int main(){
    int N;
    cin >> N;
    
    int firstR;
    cin >> firstR;
    
    int radius, gcd;
    for(int i = 0 ; i < N-1 ; i++){
        cin >> radius;
        gcd = getGcd(firstR, radius);
        cout << firstR/gcd << "/" << radius/gcd << "\n";
    }
    return 0;
}
