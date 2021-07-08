//
//  12015-1.cpp
//  DP
//
//  Created by 임수정 on 2021/07/08.
//  Copyright © 2021 임수정. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int lowerBound(){
    
    return 1;
}

int main(){
    int N;
    cin >> N;
    
    int arr[N];
    vector<int> v;
    v.push_back(-INFINITY);
    
    v.at(0) = 1;
    cout << v.back();
    /*
    for(int i = 0 ; i < N ; i++){
        cin >> arr[i];
        if(v.back() < arr[i]){
            v.push_back(arr[i]);
        }else{
            v.at(1) = 1;
        }
        v.push_back(arr[i]);
        
    }
    
    */
    
    return 0;
}
