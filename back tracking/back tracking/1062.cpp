//
//  1062.cpp
//  back tracking
//
//  Created by sujeong on 10/17/24.
//  Copyright © 2024 임수정. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

vector<vector<bool>> masks;

void dfs(int i, int k, int cnt, vector<bool> mask){
    if(i <= 26) {
        if(cnt == k){
            masks.push_back(mask);
        } else {
            if(i == 26){
                return;
            }
            if(!mask[i]){
                vector<bool> _mask(mask.begin(), mask.end());
                // 글자 포함하기
                _mask[i] = true;
                dfs(i+1, k, cnt+1, _mask);
            }
            // 포함 안함
            dfs(i+1, k, cnt, mask);
        }
    }
}

int main() {
    int N, K;
    cin >> N >> K;
    
    if(K < 5){
        cout << 0;
        return 0;
    }
    
    vector<string> list;

    for(int i = 0 ; i < N ; i++){
        string s;
        cin >> s;
        list.push_back(s.substr(4, s.size()-8));
    }
    
    vector<bool> mask(26, false);
    mask['a'-'a'] = true;
    mask['c'-'a'] = true;
    mask['n'-'a'] = true;
    mask['t'-'a'] = true;
    mask['i'-'a'] = true;
    dfs(1, K, 5, mask);
    
    int answer = 0;
    for(vector<bool> m: masks){
        // 이 글자들로 단어 몇개 읽을 수 있는지 확인
        int cnt = 0;
        for(string word: list){
            bool isReadable = true;
            for(char ch: word){
                if(!m[ch-'a']){
                    isReadable = false;
                    break;
                }
            }
            if(isReadable)
                cnt++;
        }
        if(answer < cnt){
            answer = cnt;
        }
    }
    
    cout << answer;
    
    return 0;
}
