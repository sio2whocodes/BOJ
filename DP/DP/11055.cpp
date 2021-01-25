//
//  11055.cpp
//  DP
//
//  Created by 임수정 on 2020/08/20.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n ;

    int num[n];
    int max[n];
    int result = 0;
    for(int i = 0 ; i < n ; i++){
        cin >> num[i];
        max[i] = num[i];
        for(int j = 0 ; j < i ; j++){
            if(num[j] < num[i] && max[j]+num[i] >= max[i]){
                max[i] = max[j]+num[i];
            }
        }
        if(result < max[i])
            result = max[i];
    }
    
    cout << result;
    return 0;
}
