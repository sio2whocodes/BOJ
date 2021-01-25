//
//  1312.cpp
//  math3
//
//  Created by 임수정 on 2020/07/29.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int a,b,n;
    cin >> a >> b >> n;
    for(int i = 1 ; i <= n ; i++){
        a %= b;
        a *= 10;
    }
    cout << a/b;
    return 0;
}
