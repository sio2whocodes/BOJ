//
//  3460.cpp
//  math1
//
//  Created by sujeong on 7/23/24.
//  Copyright © 2024 임수정. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
        
    for(int i = 0 ; i < T ; i++){
        int n;
        cin >> n;
        
        int idx = 0;
        while(n > 0){
            if(n % 2 == 1){
                cout << idx << " ";
            }
            n /= 2;
            idx++;
        }
    }
    
    return 0;
}

// & 연산 쓰기
