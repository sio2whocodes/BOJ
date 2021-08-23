//
//  1991.cpp
//  Tree
//
//  Created by 임수정 on 2021/08/23.
//
//https://sio2whocode.tistory.com/144
//https://www.acmicpc.net/problem/1991

#include <iostream>
using namespace std;
int adj[26][2];

void preorder_traverse(int root){
    cout << (char)(root+'A');
    int left, right;
    if((left = adj[root][0]) >= 0)
        preorder_traverse(left);
    if((right = adj[root][1]) >= 0)
        preorder_traverse(right);
}

void inorder_traverse(int root){
    int left, right;
    if((left = adj[root][0]) >= 0)
        inorder_traverse(left);
    cout << (char)(root+'A');
    if((right = adj[root][1]) >= 0)
        inorder_traverse(right);
}

void prorder_traverse(int root){
    int left, right;
    if((left = adj[root][0]) >= 0)
        prorder_traverse(left);
    if((right = adj[root][1]) >= 0)
        prorder_traverse(right);
    cout << (char)(root+'A');
}

int main(){
    //init & input
    int n;
    cin >> n;
    
    char node, left, right;
    for(int i = 0 ; i < n ; i++){
        cin >> node >> left >> right;
        adj[node-'A'][0] = left-'A';
        adj[node-'A'][1] = right-'A';
    }
    
    //process & output
    preorder_traverse(0);
    cout << "\n";
    inorder_traverse(0);
    cout << "\n";
    prorder_traverse(0);
    cout << "\n";

    return 0;
}
