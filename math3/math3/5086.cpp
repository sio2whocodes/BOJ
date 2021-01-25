//
//  5086.cpp
//  math3
//
//  Created by 임수정 on 2020/07/31.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int a, b;
    while(1){
        cin >> a >> b;
        if(a == 0 && b == 0)
            break;
        if(b % a == 0)
            cout << "factor\n";
        else if(a % b == 0)
            cout << "multiple\n";
        else
            cout << "neither\n";
    }
    return 0;
}
