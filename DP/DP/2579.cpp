//
//  2579.cpp
//  DP
//
//  Created by 임수정 on 2020/08/12.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int arr[2][2] = {0,};
    int score1, score2;
    int score;
    for(int i = 0 ; i < n ; i++){
        score1 = max(arr[0][0], arr[0][1]);
        score2 = arr[1][0];
        cin >> score;
        arr[0][0] = arr[1][0];
        arr[0][1] = arr[1][1];
        arr[1][0] = score+score1;
        arr[1][1] = score+score2;
    }
    cout << max(arr[1][0], arr[1][1]);
    return 0;
}
