//
//  13305.cpp
//  Greedy
//
//  Created by 임수정 on 2021/02/24.
//  Copyright © 2021 임수정. All rights reserved.
//
//https://www.acmicpc.net/problem/13305
//https://sio2whocode.tistory.com/97

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int dist[n-1];
    for(int i = 0 ; i < n-1 ; i++){
        cin >> dist[i];
    }
    int price[n];
    for(int i = 0 ; i < n ; i++){
        cin >> price[i];
    }
    int minPrice = price[0];
    int minIndex = 0;
    long long totalPrice = 0;
    for(int i = 0 ; i < n ; i++){
        if(price[i] < minPrice || i == n-1){
            long long sumOfdist = 0;
            for(int j = minIndex ; j < i ; j++){
                sumOfdist += dist[j];
            }
            totalPrice += sumOfdist*minPrice;
            minPrice = price[i];
            minIndex = i;
        }
    }
    cout << totalPrice;
    return 0;
}
