//
//  1149-1.cpp
//  DP
//
//  Created by 임수정 on 2020/08/10.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int rgb[n][3];
    for(int i = 0 ; i < n ; i++){
        cin >> rgb[i][0] >> rgb[i][1] >> rgb[i][2];
    }
    for(int i = 1 ; i < n ; i++){
        rgb[i][0] += min(rgb[i-1][1], rgb[i-1][2]);
        rgb[i][1] += min(rgb[i-1][0], rgb[i-1][2]);
        rgb[i][2] += min(rgb[i-1][0], rgb[i-1][1]);
    }
    
    cout << min(min(rgb[n-1][0], rgb[n-1][1]), rgb[n-1][2]);
    return 0;
}
