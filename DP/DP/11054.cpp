//
//  11054.cpp
//  DP
//
//  Created by 임수정 on 2020/08/26.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
using namespace std;


int main(){
    int n;
    cin >> n ;

    int num[n];
    int lengthasc[n];
    int lengthdesc[n];
    int result = 0;
    for(int i = 0 ; i < n ; i++){
        cin >> num[i];
    }
    for(int i = 0 ; i < n ; i++){
        lengthasc[i] = 1;
        for(int j = 0 ; j < i ; j++){
            if(num[j] < num[i] && lengthasc[j] >= lengthasc[i]){
                lengthasc[i] = lengthasc[j]+1;
            }
        }
    }
    
    for(int j = n-1 ; j >= 0 ; j--){
        lengthdesc[j] = 1;
        for(int k = j+1 ; k < n ; k++){
            if(num[j] > num[k] && lengthdesc[j] <= lengthdesc[k]){
                lengthdesc[j] = lengthdesc[k]+1;
            }
        }
    }

    for(int i = 0 ; i < n ; i++){
        if(result < lengthdesc[i]+lengthasc[i]-1)
            result = lengthdesc[i]+lengthasc[i]-1;
    }
    
    cout << result;
    
    return 0;
}
