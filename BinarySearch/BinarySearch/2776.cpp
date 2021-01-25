//
//  2776.cpp
//  BinarySearch
//
//  Created by 임수정 on 2021/01/15.
//

#include <iostream>
#include <algorithm>
using namespace std;
int T,N,M;
int note1[1000000];
int binarySearch(int num){
    int s = 0;
    int e = N-1;
    int mid;
    while(s <= e){
        mid = (s+e)/2;
        if(note1[mid] == num){
            return 1;
        }else if(note1[mid] < num){
            s = mid+1;
        }else{
            e = mid-1;
        }
    }
    return 0;
}
int main(){
    int note2;
    cin >> T;
    for(int t = 0 ; t < T ;t++){
        cin >> N;
        for(int i = 0 ; i < N ; i++){
            cin >> note1[i];
        }
        sort(note1, note1+N);
        cin >> M;
        for(int i = 0 ; i < M ; i++){
            cin >> note2;
            cout << binarySearch(note2) << "\n";
        }
    }
    return 0;
}
