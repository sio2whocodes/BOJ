//
//  2470.cpp
//  TwoPointer
//
//  Created by 임수정 on 2021/07/29.
//
//https://sio2whocode.tistory.com/132

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    //input & init
    int N;
    cin >> N;
    
    int arr[N];
    for(int i = 0 ; i < N ; i++){
        cin >> arr[i];
    }
    
    long long min;
    int s,e,as,ae;
    
    //process
    sort(arr, arr+N);
    
    as = s = 0;
    ae = e = N-1;
    min = llabs(arr[s]+arr[e]);
        
    long long sum = min;
    while(s < e){
        sum = arr[s]+arr[e];
        if(min > llabs(sum)){
            min = llabs(sum);
            as = s;
            ae = e;
        }
        
        if(sum < 0)
            s++;
        else
            e--;
    }
    
    //output
    cout << arr[as] << " "<< arr[ae] << "\n";
    return 0;
}
