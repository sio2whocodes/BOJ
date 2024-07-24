//
//  2693.cpp
//  Sort
//
//  Created by sujeong on 7/24/24.
//  Copyright © 2024 임수정. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    
    for(int t = 0 ; t < T ; t++){
        // input
        int arr[10];
        for(int i = 0 ; i < 10 ; i++){
            cin >> arr[i];
        }
        // 선택 정렬
        int min;
        int minIdx;
        for(int i = 0 ; i < 9 ; i++){
            min = arr[i];
            minIdx = i;
            for(int j = i+1; j < 10 ; j++){
                if(min > arr[j]){
                    min = arr[j];
                    minIdx = j;
                }
            }
            if(minIdx != i){
                arr[minIdx] = arr[i];
                arr[i] = min;
            }
        }
        cout << arr[7] << "\n";
    }
    return 0;
}
