//
//  9461.cpp
//  DP
//
//  Created by 임수정 on 2020/07/19.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int c, n;
    cin >> c;
    
    long p[101] = {0,1,1,0,};
    for(int k = 0 ; k < c ; k++){
        cin >> n;
        for(int i = 3; i <= n ; i++){
            p[i] = p[i-2] + p[i-3];
        }
        cout << p[n] << "\n";
    }
    return 0;
}
