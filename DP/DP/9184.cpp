//
//  9184.cpp
//  DP
//
//  Created by 임수정 on 2021/01/14.
//  Copyright © 2021 임수정. All rights reserved.
//

#include <iostream>
using namespace std;
int w[101][101][101];
int main(){
    for(int a = 0; a <= 101 ; a++){
        for(int b = 0; b <= 101 ; b++){
            for(int c = 0; c <= 101 ; c++){
                if(a>0 && b>0 && c>0){
                    break;
                }
                if(a<= 50 || b <= 50 || c <= 50){
                    w[a][b][c] = 1;
                }
            }
        }
    }
    
    if(a>20 || b>20 || c>20){
        cout << w[a][b][c] <<"\n";
    }
    return 0;
}
