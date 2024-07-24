//
//  1292.cpp
//  implement
//
//  Created by sujeong on 7/24/24.
//

#include <iostream>
using namespace std;

int main(){
    int s,e;
    cin >> s >> e;
    
    int arr[1001];
    int idx = 1;
    
    for(int i = 1; i <= 50 ; i++){
        for(int j = 0; j < i; j++){
            arr[idx++] = i;
            if(idx > e){
                break;
            }
        }
    }
    
    int sum = 0;
    for(int i = s; i <= e; i++){
        sum += arr[i];
    }
    
    cout << sum;
    return 0;
}
