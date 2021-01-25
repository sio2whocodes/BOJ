//
//  2292.cpp
//  math1
//
//  Created by 임수정 on 24/02/2020.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    
    if(N == 1){
        cout << 1;
        return 0;
    }
    int n = 1;
    while(1){
        int an = 3*n*n - 3*n + 2;
        if( an > N ){
            break;
        }
        n++;
    }
    cout << n;
    
    return 0;
}
