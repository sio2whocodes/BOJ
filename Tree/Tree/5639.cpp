//
//  5639.cpp
//  Tree
//
//  Created by 임수정 on 2021/08/24.
//
//https://www.acmicpc.net/problem/5639
//https://sio2whocode.tistory.com/145

#include <iostream>
#include <vector>
using namespace std;
vector<int> v;

int binarySearch(int target, int s, int e){
    int mid = (s+e)/2;
    while(s <= e){
        mid = (s+e)/2;
        if(v[mid] > target){
            e = mid-1;
        }else{
            s = mid+1;
        }
    }
    return s;
}

void prorder_traverse(int s, int e){
    if(s == e){
        cout << v[s] << "\n";
    }else if(s < e){
        int ns = binarySearch(v[s], s+1, e);
        prorder_traverse(s+1, ns-1);
        prorder_traverse(ns, e);
        cout << v[s] << "\n";
    }
}

int main(){
    int n;
    while(cin >> n){
        v.push_back(n);
    }
    prorder_traverse(0, v.size()-1);
    
    return 0;
}
