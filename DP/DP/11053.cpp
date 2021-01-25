//
//  11053.cpp
//  DP
//
//  Created by 임수정 on 2020/08/17.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n ;

    int num[n];
    int length[n];
    int max = 0;
    for(int i = 0 ; i < n ; i++){
        cin >> num[i];
        length[i] = 1;
        for(int j = 0 ; j < i ; j++){
            if(num[j] < num[i] && length[j] >= length[i]){
                length[i] = length[j]+1;
            }
        }
        if(max < length[i])
            max = length[i];
    }
    
    cout << max;
    return 0;
}
