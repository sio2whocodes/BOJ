//
//  5052.cpp
//  Trie
//
//  Created by 임수정 on 2021/08/18.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define NUMBER_CNT 11
#define MAXN 110000

struct Trie;
Trie* myAlloc();
bool isConsistent;

struct Trie {
    Trie* _children[NUMBER_CNT];

    void add(const char* word) {
        if (*word != 0) {
            if(*word == '$'){
                _children[10] = myAlloc();
                for(int i = 0 ; i <= 9 ; i++){
                    if(_children[i]){
                        isConsistent = false;
                        break;
                    }
                }
            }
            else{
                if(_children[10]){
                    isConsistent = false;
                }else{
                    if (_children[*word - '0'] == nullptr)
                        _children[*word - '0'] = myAlloc();
                    _children[*word - '0']->add(word + 1);
                }
                
            }
        }
    }

    void clear() {
        for (int i = 0; i < NUMBER_CNT; i++) {
            _children[i] = nullptr;
        }
    }
};

Trie Node[MAXN];
int nodeCnt = 0;

Trie* myAlloc() {
    Trie* ret = &Node[nodeCnt++];
    ret->clear();
    return ret;
}


int main(){
    int T;
    cin >> T;
    vector<bool> result;
    for(int test_case = 1 ; test_case <= T ; test_case++){
        nodeCnt = 0;
        Trie* root = myAlloc();

        int n;
        cin >> n;
        isConsistent = true;
        for(int i = 0; i < n ; i++){
            string s;
            cin >> s;
            s += "$";
            char sufixch[s.size()+1];
            for(int j = 0 ; j < s.size() ; j++){
                sufixch[j] = s[j];
            }
            sufixch[s.size()] = '\0';
//            cout << sufixch << endl;
            root->add(sufixch);
            if(!isConsistent){
                break;
            }
        }
        if(isConsistent){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}
