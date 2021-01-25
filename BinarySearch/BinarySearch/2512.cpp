//
//  2512.cpp
//  BinarySearch
//
//  Created by 임수정 on 2021/01/07.
//

#include <iostream>
using namespace std;
int N,M;
int budget[200000];
bool isUnder(int max){
    int total = 0;
    for(int i = 0 ; i < N ; i++){
        if(max > budget[i]){
            total += budget[i];
        }else{
            total += max;
        }
    }
    return total <= M ? true : false;
}
int binarySearchMax(int s, int e){
    int mid = 0;
    while(s <= e){
        mid = (s+e)/2;
        if(isUnder(mid)){
            s = mid+1;
        }else{
            e = mid-1;
        }
    }
    return s-1;
}
int main(){
    cin >> N;
    int max = 0;
    int sum = 0;
    for(int i = 0 ; i < N ; i++){
        cin >> budget[i];
        sum += budget[i];
        if(max < budget[i])
            max = budget[i];
    }
    cin >> M;
    
    if(sum <= M){
        cout << max;
    }else{
        cout << binarySearchMax(1, max);
    }
    return 0;
}
