//
//  2156.cpp
//  DP
//
//  Created by 임수정 on 2020/08/14.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int arr[n][2];
    int score1, score2;
    int score;
    cin >> score1;
    if(n==1){
        cout << score1;
        return 0;
    }
    arr[0][0] = score1;
    arr[0][1] = score1;
    if(n >= 2){
        cin >> score2;
        arr[1][0] = score2;
        arr[1][1] = score2+score1;
        if(n>=3){
            cin >> score;
            arr[2][0] = score1+score;
            arr[2][1] = score2+score;
        }
    }
    if(n<=3){
        cout << max(max(max(arr[n-1][0], arr[n-1][1]),arr[n-2][0]),arr[n-2][1]);
        return 0;
    }
    for(int i = 3 ; i < n ; i++){
        score1 = max(max(max(arr[i-2][0],arr[i-2][1]),arr[i-3][0]),arr[i-3][1]);
        score2 = arr[i-1][0];
        cin >> score;
        arr[i][0] = score+score1;
        arr[i][1] = score+score2;
    }
    cout << max(max(max(arr[n-1][0], arr[n-1][1]),arr[n-2][0]),arr[n-2][1]);
    return 0;
}
