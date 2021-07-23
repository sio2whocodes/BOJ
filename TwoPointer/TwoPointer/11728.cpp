//
//  11728.cpp
//  TwoPointer
//
//  Created by 임수정 on 2021/07/23.
//

#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    //init & input
    int an, bn, cn;
    cin >> an >> bn;
    cn = an + bn;
    
    int A[an], B[bn], C[cn];
    for(int i = 0 ; i < an ; i++){
        cin >> A[i];
    }
    for(int i = 0 ; i < bn ; i++){
        cin >> B[i];
    }
    
    //process
    int a,b,c;
    a = b = c = 0;
    while(a < an && b < bn){
        if(A[a] <= B[b]){
            C[c++] = A[a++];
        }else{
            C[c++] = B[b++];
        }
    }
    
    while(a < an){
        C[c++] = A[a++];
    }
    while(b < bn){
        C[c++] = B[b++];
    }
    
    //output
    for(int i = 0 ; i < cn ; i++){
        cout << C[i] << " ";
    }
    cout << "\n";
    
    return 0;
}
