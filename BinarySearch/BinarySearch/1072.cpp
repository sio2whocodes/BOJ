//
//  1072.cpp
//  BinarySearch
//
//  Created by 임수정 on 2021/01/13.
//

#include <iostream>
using namespace std;
long long X, Y;// X : 게임 횟수, Y: 이긴 게임
long long Z;

long long binarySearchMax(long long s, long long e){
    long long mid = 0;
    while(s <= e){
        mid = (s+e)/2;
        if((Y+mid)*100/(X+mid) > Z){
            e = mid-1;
        }else{
            s = mid+1;
        }
    }
    return s;
}
int main(){
    cin >> X >> Y;
    
    Z = (Y*100)/X;
    if(Z>=99){
        cout << -1;
        return 0;
    }
    cout << binarySearchMax(0, 1000000000);
    return 0;
}
