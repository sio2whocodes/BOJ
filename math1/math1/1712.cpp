//
//  1712.cpp
//  math1
//  손익분기점
//  Created by 임수정 on 24/02/2020.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    //const costs, variable costs, price
    int cc, vc, price;
    cin >> cc >> vc >> price;
    
    int n;
    
    if(price <= vc)
        n = -1;
    else
        n = cc / (price - vc) + 1;
    
    cout << n ;
    return 0;
}
