//
//  16916.cpp
//  String
//
//  Created by sujeong on 2/6/25.
//  Copyright © 2025 임수정. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstdio>
#include <vector>
using namespace std;
vector<int> getPi(string p){
    int m = (int)p.size(), j=0;
    vector<int> pi(m, 0);
    for(int i = 1; i< m ; i++){
        while(j > 0 && p[i] != p[j])
            j = pi[j-1];
        if(p[i] == p[j])
            pi[i] = ++j;
    }
    return pi;
}
int kmp(string s, string p){
    auto pi = getPi(p);
    int n = (int)s.size(), m = (int)p.size(), j =0;
    for(int i = 0 ; i < n ; i++){
        while(j>0 && s[i] != p[j])
            j = pi[j-1];
        if(s[i] == p[j]){
            if(j==m-1){
                return 1;
            }else{
                j++;
            }
        }
    }
    return 0;
}
int main(){
    string s, p;
    cin >> s;
    cin >> p;
    cout << kmp(s,p);
    return 0;
}
