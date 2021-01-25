//
//  2805.cpp
//  BinarySearch
//
//  Created by 임수정 on 2020/12/30.
//

#include <iostream>
using namespace std;
long long height[1000000];
int N;
long long M;

bool isEnough(long long H){
    long long total = 0;
    for(long long i = 0 ; i < N ; i++)
        total += (height[i]-H > 0 ? height[i]-H : 0);
    return total>=M ? true : false;
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
    cin >> N >> M;
    long long max = 0;
    for(int i = 0 ; i < N ; i++){
        cin >> height[i];
        max = ( max <= height[i] ? height[i] : max );
    }
    cout << binarySearchMax(0,max);
    
    return 0;
}
