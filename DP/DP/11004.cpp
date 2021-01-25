//
//  11004.cpp
//  DP
//
//  Created by 임수정 on 2020/08/24.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int num[1000000];

void binarySearch(int key, int n){
    int start = 0;
    int end = n-1;
    int mid;

    while(start <= end){
        mid = (start+end)/2;
        if(num[mid] == key){
            cout << "1\n";
            return;
        }
        else if(num[mid] < key)
            start = mid+1;
        else
            end = mid-1;
    }
    cout << "0\n";
}
int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> num[i];
    }
    sort(num, num+n);
    int k;
    cin >> k;
    int key;
    for(int i = 0; i < k ; i++){
        cin >> key;
        binarySearch(key, n);
    }
    
    return 0;
}
