//
//  6236.cpp
//  BinarySearch
//
//  Created by 임수정 on 2021/01/15.
//

#include <iostream>
using namespace std;
int N, M;
int arr[100000];
bool isOver(int p){
    int cnt = 1;
    int total = 0;
    for(int i = 0 ; i < N ; i++){
        if(total + arr[i] <= p){
            total+= arr[i];
        }else{
            total = arr[i];
            cnt++;
        }
    }
    return cnt > M ? true : false;
}
int binarySearch(int s, int e){
    int mid;
    while(s <= e){
        mid = (s+e)/2;
        if(isOver(mid)){
            s = mid+1;
        }else{
            e = mid-1;
        }
    }
    return s;
}
int main(){
    cin >> N >> M;
    int min = 0;
    int sum = 0;
    for(int i = 0 ; i < N ; i++){
        cin >> arr[i];
        if(min >= arr[i]){
            min = arr[i];
        }
        sum += arr[i];
    }
    cout << binarySearch(min, sum);
    
    
    return 0;
}
