//
//  3053.cpp
//  math2
//
//  Created by 임수정 on 04/03/2020.
//  Copyright © 2020 임수정. All rights reserved.
//
#include<iostream>
using namespace std;
#define PI 3.14159265358979

int main(){
    int r;
    cin >> r;

    cout.setf(ios::fixed);
    cout.precision(6);
    cout << r*r * PI << "\n";
    cout << ( r * 2 ) * ( r * 2 ) / 2  * 1.0<< "\n";
    
    return 0;
}
