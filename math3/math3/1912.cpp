//
//  1912.cpp
//  math3
//
//  Created by 임수정 on 2020/07/24.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    int* nums = new int [n];
    int* maxs = new int [n];
    for(int i = 0 ; i < n ; i++){
        cin >> nums[i];
    }
    maxs[0] = nums[0];
    for(int i = 1 ; i < n ; i++){
        maxs[i] = max(maxs[i-1] + nums[i], nums[i]);
    }
    int max = maxs[0];
    for(int i = 1 ; i < n ; i++){
        if(max < maxs[i])
            max = maxs[i];
    }
    cout << max;
    return 0;
}
