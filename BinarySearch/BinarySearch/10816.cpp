//
//  10816.cpp
//  BinarySearch
//
//  Created by 임수정 on 2020/12/28.
//

#include <iostream>
#include <algorithm>
using namespace std;
int gotnum[500000];
int N;

int binarySearchS(int num){
    int s = 0;
    int e = N-1;
    int mid = (s+e)/2;
    while(e>=s){
        mid = (s+e)/2;
        if(gotnum[mid] == num && gotnum[mid-1] != num){
            return mid;
        }
        else if(gotnum[mid] >= num){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return N;
}
int binarySearchE(int num){
    int s = 0;
    int e = N-1;
    int mid = (s+e)/2;
    while(e>=s){
        mid = (s+e)/2;
        if(gotnum[mid] == num && gotnum[mid+1] != num){
            return mid;
        }
        else if(gotnum[mid] <= num){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }
    return -1;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> N;
    for(int i = 0 ; i < N ; i++){
        cin >> gotnum[i];
    }
    sort(gotnum, gotnum+N);
    int M;
    cin >> M;
    
    int setnum;
    long a,b;
    for(int i = 0 ; i < M ; i++){
        cin >> setnum;
        a = lower_bound(gotnum, gotnum+N, setnum)-gotnum+1;
        b = upper_bound(gotnum, gotnum+N, setnum)-gotnum+1;
        cout << b-a << " ";
    }
    return 0;
}
