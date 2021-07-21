//
//  2003.cpp
//  TwoPointer
//
//  Created by 임수정 on 2021/07/21.
//
//https://sio2whocode.tistory.com/126
#include <iostream>
using namespace std;

int main(){
    //input
    int N, target;
    cin >> N >> target;
    
    int arr[N+1];
    for(int i = 0 ; i < N ; i++){
        cin >> arr[i];
    }
    
    //process
    int s,e;
    s = e = 0;
    int sum = arr[0];
    int cnt = 0;
    while(s <= e && e < N){
        if(sum > target){
            if(s == e){
                sum += arr[++e];
            }else{
                sum -= arr[s++];
            }
        }else if(sum < target){
            sum += arr[++e];
        }else{
            cnt++;
            sum += arr[++e];
        }
    }
    
    //output
    cout << cnt << "\n";
    return 0;
}
