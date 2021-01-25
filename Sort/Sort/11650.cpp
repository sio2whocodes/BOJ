//
//  11650.cpp
//  Sort
//
//  Created by 임수정 on 15/03/2020.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    
    int x[n];
    int y[n];
    for(int i = 0 ; i < n ; i++)
        cin >> x[i] >> y[i];
    
    //X좌표 기준으로 정렬
    int minX, minIndex;
    for(int i = 0 ; i < n-1 ; i++){
        minX = x[i];
        minIndex = i;
        for(int j = i+1 ; j < n ; j++){
            if(minX > x[j]){
                minX = x[j];
                minIndex = j;
            }
        }
        if(minIndex != i){
            swap(x[i], x[minIndex]);
            swap(y[i], y[minIndex]);
        }
    }
    //Y좌표 기준 정렬
    int start = 0;
    for(int i = 0 ; i < n ; i++){
        if(x[i] != x[i+1]){
            sort(y+start, y+i+1);
            start = i+1;
        }
    }
    for(int i = 0 ; i < n ; i++){
        cout << x[i] << " " << y[i] << "\n";
    }
    return 0;
}
