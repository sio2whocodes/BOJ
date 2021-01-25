//
//  2869-1.cpp
//  math1
//
//  Created by 임수정 on 24/02/2020.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    int A, B, V;
    cin >> A >> B >> V;
    
//    V -= A;
//    double date = (double)V / (A-B)*1.0;
//    cout << ceil(date)+1;
    
//    cout << ceil((V - A) / (A - B))+1;
    cout << (V-B-1)/(A-B) + 1;
    return 0;
}
