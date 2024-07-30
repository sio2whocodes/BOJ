//
//  2609.cpp
//  math3
//
//  Created by 임수정 on 2020/07/15.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n1, n2;
    cin >> n1 >> n2;
    
    int minn = min(n1,n2);
    for(int i = minn; i >= 1; i--){
        if(n1 % i == 0 && n2 % i == 0){
            cout << i << "\n";
            break;
        }
    }

    for(int n = 1; n <= max(n1,n2); n++){
        if(minn*n % n1 == 0 && minn*n % n2 == 0){
            cout << minn*n ;
            break;
        }
    }
   
    return 0;
}
