//
//  1789.cpp
//  BinarySearch
//
//  Created by 임수정 on 2021/01/12.
//

#include <iostream>
using namespace std;
long long S;
bool isOver(long long n){
    return ((n*(n+1)) / 2) > S ? true : false ;
}
long long binarySearchMax(long long s, long long e){
    long long mid = 0;
    while(s <= e){
        mid = (s+e)/2;
        if(isOver(mid)){
            e = mid-1;
        }else{
            s = mid+1;
        }
    }
    return s-1;
}
int main(){
    cin >> S;
//    for(int i = 1; i <= S ; i++){
//        if( ((i*(i+1)) / 2) > S ){
//            cout << i-1;
//            return 0;
//        }
//    }
//
    cout << binarySearchMax(1, S);
    
//    cout << 1;
    
    return 0;
}
