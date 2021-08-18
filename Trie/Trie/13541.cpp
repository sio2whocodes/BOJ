//
//  main.cpp
//  Trie
//
//  Created by 임수정 on 2021/08/18.
//
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define ALPHABETS_CNT 27
#define MAXN 100000000

struct Trie;
Trie* myAlloc();
int distinctCnt = 0;

struct Trie {
    Trie* _children[ALPHABETS_CNT];

    void add(const char* word) {
        if (*word != 0) {
            if(*word == '$'){
                if(!_children[0]){
                    _children[0] = myAlloc();
                    distinctCnt++;
                }else{
                    _children[0]->add(word);
                }
            }
            else{
                if (_children[*word - 'a' + 1] == nullptr)
                    _children[*word - 'a' + 1] = myAlloc();
                _children[*word - 'a' + 1]->add(word + 1);
            }
        }
    }

    void clear() {
        for (int i = 0; i < ALPHABETS_CNT; i++) {
            _children[i] = nullptr;
        }
    }
};

Trie Node[MAXN];
int nodeCnt = 0;
int k, cnt;
vector<char> v;

Trie* myAlloc() {
    Trie* ret = &Node[nodeCnt++];
    ret->clear();
    return ret;
}

void findKth(Trie* root){
    if(cnt == k){
        return;
    }
    if(root->_children[0]){
        if(++cnt == k){
            for(int i = 0 ; i < v.size() ; i++){
                cout << v[i];
            }
            cout << "\n";
            return;
        }
    }
    for(int i = 0 ; i <= 26 ; i++){
        if(root->_children[i]){
            if(i != 0)
                v.push_back(i-1+'a');
            findKth(root->_children[i]);
            if(i != 0)
                v.pop_back();
        }
    }
}

int main(){
    nodeCnt = 0;
    Trie* root = myAlloc();

    string str;
    cin >> str >> k;
    
    distinctCnt = 0;
    for(int gap = 1 ; gap <= str.size() ; gap++){
        int s = 0;
        
        while(s + gap <= str.size()){
            string sub = str.substr(s++, gap) + "$";
            char subch[sub.size()+1];
            for(int j = 0 ; j < sub.size() ; j++){
                subch[j] = sub[j];
            }
            subch[sub.size()] = '\0';
//                cout << subch << endl;
            root->add(subch);
        }
    }
    if(distinctCnt < k){
        cout << "-1\n";
        return 0;
    }
    
    cnt = 0;
    findKth(root);
    return 0;
}
