//
//  main.cpp
//  LinkedList
//
//  Created by 임수정 on 2021/07/22.
//
//https://sio2whocode.tistory.com/127
#include <iostream>
using namespace std;

struct Node{
    char data;
    Node* next;
    Node* prev;
};

Node node[600002];
int nodeCnt;
Node* head;
Node* tail;
Node* cursor;


Node* getNode(char data){
    node[nodeCnt].data = data;
    node[nodeCnt].prev = nullptr;
    node[nodeCnt].next = nullptr;
    return &node[nodeCnt++];
}

void init(){
    nodeCnt = 0;
    head = getNode(0);
    tail = getNode(0);
    head->next = tail;
    tail->prev = head;
    cursor = tail;
}

void insert(char data){
    Node* n = getNode(data);
    n->prev = cursor->prev;
    cursor->prev->next = n;
    n->next = cursor;
    cursor->prev = n;
}

void initStr(char* str){
    int i = 0;
    while(str[i] != '\0'){
        insert(str[i++]);
    }
}

void deleteNode(){
    //cursor의 prev를 지움
    if(cursor->prev != head){
        cursor->prev->prev->next = cursor;
        cursor->prev = cursor->prev->prev;
    }
}

void left(){
    if(cursor->prev != head){
        cursor = cursor->prev;
    }
}

void right(){
    if(cursor != tail){
        cursor = cursor->next;
    }
}

int main(){
    //input
    char str[100001];
    cin >> str;
    
    init();
    initStr(str);
    
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        char ch;
        cin >> ch;
        switch (ch) {
            case 'L':
                left();
                break;
            case 'D':
                right();
                break;
            case 'B':
                deleteNode();
                break;
            case 'P':
                char m;
                cin >> m;
                insert(m);
                break;
            default:
                break;
        }
    }
    
    cursor = head;
    while(cursor->next != tail){
        cout << cursor->next->data;
        cursor = cursor->next;
    }
    cout << "\n"; // 이거때문인거 실화야?
    return 0;
}
