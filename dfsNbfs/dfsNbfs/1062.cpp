//
//  1062.cpp
//  dfsNbfs
//
//  Created by sujeong on 8/2/24.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int N, K;
int result = 0;

void dfs(int i, int wordCnt, int letterCnt, vector<bool> teach, vector<string> list){
    if(i == N){
        if(result < wordCnt){
            result = wordCnt;
        }
        return;
    }
    
    string s = list[i];
    vector<bool> _teach(teach.begin(), teach.end());
    int _cnt = letterCnt;
    
    // i번째 단어 가르치기
    for(int j = 0 ; j < s.size() ; j++){
        if(!_teach[s[j]-'a']){
            _cnt++;
            _teach[s[j]-'a'] = true;
        }
    }
    
    if (_cnt <= K) {
        // i번 단어 가르침
        dfs(i+1, wordCnt+1, _cnt, _teach, list);
    }
    // i번 단어 안가르침
    dfs(i+1, wordCnt, letterCnt, teach, list);
}

int main() {
    
    vector<string> list;

    cin >> N >> K;
    
    if(K < 5){
        cout << 0;
        return 0;
    }
    
    for(int i = 0 ; i < N ; i++){
        string s;
        cin >> s;
        list.push_back(s.substr(4, s.size()-8));
    }
    // "adnti" 가르치기
    vector<bool> teach(26, 0);
    string def = "acnti";
    for(int i = 0 ; i < 5 ; i++){
        teach[def[i]-'a'] = true;
    }
    
    dfs(0, 0, 5, teach, list);
    
    cout << result;
    
    return 0;
}
