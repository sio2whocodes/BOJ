//
//  3273.cpp
//  TwoPointer
//
//  Created by 임수정 on 2021/08/04.
//

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
    
    int x;
    cin >> x;
    
    //process
    
    sort(arr, arr+N);
    
    if(N == 1){
        cout << 0 << "\n";
        return 0;
    }
    
    int s,e;
    s = 0;
    e = N-1;
  
    int cnt = 0;
    int sum = arr[s] + arr[e];
    while(s < e){
        sum = arr[s] + arr[e];
        if(sum > x){
            e--;
        }else if(sum == x){
            cnt++;
            s++;
            e--;
        }else{
            s++;
        }
    }
    
    cout << cnt << "\n";
    
    return 0;
}
