//
//  1654.cpp
//  BinarySearch
//
//  Created by 임수정 on 2020/12/29.
//

#include <iostream>
using namespace std;
long long lengths[10000];
int K, N;

bool isOverN(long long len){
    int cnt = 0;
    for(int i = 0 ; i < K ; i++)
        cnt += lengths[i]/len;
    return cnt>=N ? true : false;
}
long long binarySearchMax(long long s, long long e){
    long long mid = 0;
    while(s <= e){
        mid = (s+e)/2;
        if(isOverN(mid)){
            s = mid+1;
        }else{
            e = mid-1;
        }
    }
    return s-1;
}
int main(){
    cin >> K >> N;
    long long max = 0;
    for(int i = 0 ; i < K ; i++){
        cin >> lengths[i];
        max = ( max <= lengths[i] ? lengths[i] : max );
    }
    cout << binarySearchMax(1,max);
    
    return 0;
}
