//
//  2231.cpp
//  BruteForce
//
//  Created by 임수정 on 06/03/2020.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    
    int n;
    cin >> n;
    
    int sum = 0;
    int num = 0;
    for(int i = 1 ; i < n ; i++){
        sum = i;
        num = i;
        while(num != 0){
            sum += num%10;
            num /= 10;
        }
        if(sum == n){
            cout << i;
            return 0;
        }
    }
    cout << 0;
    return 0;
}
