//
//  2110.cpp
//  BinarySearch
//
//  Created by 임수정 on 2021/01/05.
//

#include <iostream>
#include <algorithm>
using namespace std;
int N,C;
int houses[200000];
bool isEnough(long long d){
    int total = 0;
    int a = houses[0];
    for(int i = 1 ; i < N ; i++){
        if(a+d <= houses[i]){
            total++;
            a = houses[i];
        }
    }
    return total+1>=C ? true : false;
}
long long binarySearchMax(long long s, long long e){
    long long mid = 0;
    while(s <= e){
        mid = (s+e)/2;
        if(isEnough(mid)){
            s = mid+1;
        }else{
            e = mid-1;
        }
    }
    return s-1;
}
int main(){
    cin >> N >> C;
    for(int i = 0 ; i < N ; i++){
        cin >> houses[i];
    }
    sort(houses, houses+N);
    cout << binarySearchMax(1, houses[N-1]);
    
    
    return 0;
}
