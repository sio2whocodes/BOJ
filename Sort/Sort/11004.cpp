//
//  11004.cpp
//  Sort
//
//  Created by 임수정 on 2020/08/24.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    int num[5000000];
    for(int i = 0 ; i < n ; i++){
        cin >> num[i];
    }
    cout << num[k-1];
    return 0;
}
