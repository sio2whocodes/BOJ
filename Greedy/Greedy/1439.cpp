//
//  1439.cpp
//  Greedy
//
//  Created by sujeong on 2024/06/20.
//  Copyright © 2024 임수정. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string s;
    cin >> s;

    vector<int> v(2,0);
    char cur = '2';
    int len = s.size();
    for(int i = 0 ; i < len ; i++){
        if(cur != s[i]){
            v[s[i]-'0']++;
            cur = s[i];
        }
    }
    
    if(v[0] == 0 || v[1] == 0){
        cout << 0 << endl;
    }else{
        cout << min(v[0], v[1]) << endl;
    }
    
    return 0;
}
