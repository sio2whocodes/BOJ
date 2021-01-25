//
//  10815.cpp
//  BinarySearch
//
//  Created by 임수정 on 2021/01/05.
//

#include <iostream>
#include <algorithm>
using namespace std;
int sg[500000];
int n;
int isinsg(int num){
    int s = 0;
    int e = n-1;
    int mid;
    while(s <= e){
        mid = (s+e)/2;
        if(sg[mid] == num){
            return 1;
        }else if(sg[mid] > num){
            e = mid-1;
        }else{
            s = mid+1;
        }
    }
    return 0;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> sg[i];
    }
    sort(sg, sg+n);
    
    int m, num;
    cin >> m;
    for(int i = 0 ; i < m ; i++){
        cin >> num;
        cout << isinsg(num) << " ";
    }
    return 0;
}
