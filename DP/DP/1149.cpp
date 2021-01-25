//
//  1149.cpp
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
    
    int mins[2][3];
    for(int i = 0 ; i < 3 ; i++)
        cin >> mins[0][i];
    for(int i = 1 ; i < n ; i++){
        cin >> mins[1][0] >> mins[1][1] >> mins[1][2];
        mins[1][0] += min(mins[0][1], mins[0][2]);
        mins[1][1] += min(mins[0][0], mins[0][2]);
        mins[1][2] += min(mins[0][0], mins[0][1]);
        for(int j = 0 ; j < 3 ; j++){
            mins[0][j] = mins[1][j];
        }
    }
    cout << min(min(mins[1][0], mins[1][1]), mins[1][2]);
    return 0;
}
