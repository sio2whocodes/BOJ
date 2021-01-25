//
//  10989.cpp
//  Sort
//
//  Created by 임수정 on 12/03/2020.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
using namespace std;
int cnt[10001];
int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    
    //카운트하기
    int num;
    for(int i = 0 ; i < n ; i++){
        cin >> num;
        cnt[num]++;
    }
    
    //출력
    for(int i = 0 ; i <= 10000 ; i++){
        for(int j = 0 ; j < cnt[i] ; j++)
            cout << i << "\n";
    }
    
    return 0;
}
