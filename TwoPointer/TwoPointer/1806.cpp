//
//  main.cpp
//  TwoPointer
//
//  Created by 임수정 on 2021/07/19.
//
//https://www.acmicpc.net/problem/1806
//https://sio2whocode.tistory.com/125

#include <iostream>
using namespace std;

int main(){
    //input
    int N, S;
    cin >> N >> S;
    
    int arr[N];
    for(int i = 0 ; i < N ; i++){
        cin >> arr[i];
    }
    
    //process
    int sum = arr[0];
    int len = N+1;
    int startPoint, endPoint;
    startPoint = endPoint = 0;
    while(startPoint <= endPoint && endPoint < N){
        if(sum >= S){
            len = min(len, endPoint - startPoint + 1);
            sum -= arr[startPoint++];
        }else{
            sum += arr[++endPoint];
        }
    }
    
    //out
    cout << (len > N ? 0 : len )<< endl;
    
    return 0;
}
