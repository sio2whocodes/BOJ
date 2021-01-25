//
//  2309.cpp
//  BruteForce
//
//  Created by 임수정 on 07/03/2020.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int realNanjang[7];
    
    int height[9];
    int sumOfNine = 0;
    for(int i = 0 ; i < 9 ; i++){
        cin >> height[i];
        sumOfNine += height[i];
    }
    
    int notNanjang1, notNanjang2;
    for(int i = 0 ; i < 8 ; i++){
        for(int j = i+1 ; j < 9 ; j++){
            if(sumOfNine - height[i] - height[j] == 100){
                notNanjang1 = i;
                notNanjang2 = j;
                break;
            }
        }
    }
    
    for(int i = 0, j = 0; i < 9, j < 7 ; i++){
        if(i != notNanjang1 && i != notNanjang2)
            realNanjang[j++] = height[i];
    }
    
    sort(realNanjang, realNanjang+7);
    for(int i = 0 ; i < 7 ; i++)
        cout << realNanjang[i] << "\n";
    return 0;
}
