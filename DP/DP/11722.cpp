//
//  11722.cpp
//  DP
//
//  Created by 임수정 on 2020/08/21.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n ;

    int num[n];
    int length[n];
    int max_length = 0;
    for(int i = 0 ; i < n ; i++){
        cin >> num[i];
        length[i] = 1;
        for(int j = 0 ; j < i ; j++){
            if(num[j] > num[i] && length[j] >= length[i]){
                length[i] = length[j]+1;
            }
        }
        if(max_length < length[i])
            max_length = length[i];
    }
    
    cout << max_length;
    return 0;
}
