//
//  10814.cpp
//  Sort
//
//  Created by 임수정 on 16/03/2020.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <utility>
#include <string>
using namespace std;

bool compare(pair<int, string> a, pair<int, string> b){
    return a.first < b.first;
}
int main(){
    int n;
    cin >> n;
    
    pair<int, string> ageName[n];
    int age;
    string name;
    for(int i = 0 ; i < n ; i++){
        cin >> age >> name;
        ageName[i] = make_pair(age, name);
    }
    stable_sort(ageName, ageName+n, compare);

    for(int i = 0 ; i < n ; i++)
        cout << ageName[i].first << " " << ageName[i].second << "\n";
    return 0;
}
