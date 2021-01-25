//
//  10250.cpp
//  math1
//
//  Created by 임수정 on 25/02/2020.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int YYXX[99*99];
    for(int i = 0 ; i < n ; i++){
        int H, W, N;
        cin >> H >> W >> N;
        
        int Y = N % H == 0 ? H : N % H;
        int X = N % H == 0 ? N / H : N / H + 1;
        
        YYXX[i] = Y * 100 + X;
    }
    for(int i = 0 ; i < n ; i++){
        cout << YYXX[i] << endl;
    }
    
    return 0;
}
