//
//  2559.cpp
//  TwoPointer
//
//  Created by 임수정 on 2021/07/23.
//

#include <iostream>
using namespace std;

int main(){
    //init & input
    int n, k;
    cin >> n >> k;
    
    int tempr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> tempr[i];
    }
    
    int s,e;
    s = e = 0;
    int max, sum = 0;
    
    //process
    sum = tempr[s];
    while(e < k-1){
        sum += tempr[++e];
    }
    
    max = sum;
    
    while(e < n-1){
        sum -= tempr[s++];
        sum += tempr[++e];
        max = ( sum > max ? sum : max );
    }
    
    //output
    cout << max <<"\n";
    
    return 0;
}
