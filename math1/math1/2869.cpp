//
//  2869.cpp
//  math1
//
//  Created by 임수정 on 24/02/2020.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    
    int A, B, V;
    int up = 0;
    
    cin >> A >> B >> V;
    
    int date = 1;
    while(1){
        up += A;
        if(up>=V){
            break;
        }
        date++;
        up -= B;
    }
    cout << date;
    
    return 0;
}
