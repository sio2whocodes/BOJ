//
//  9184-2024.cpp
//  DP
//
//  Created by sujeong on 2024/07/02.
//  Copyright © 2024 임수정. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int main(){
    
    int arr[101][101][101];
    int _a, _b, _c;
    
    for(int a = 0; a < 101; a++){
        for(int b = 0; b < 101; b++){
            for(int c = 0; c < 101; c++){
                _a = a-50;
                _b = b-50;
                _c = c-50;
                if(_a <= 0 || _b <= 0 || _c <= 0)
                    arr[a][b][c] = 1;
                else if(_a > 20 || _b > 20 || _c > 20)
                    arr[a][b][c] = arr[70][70][70];
                else if(a < b && b < c)
                    arr[a][b][c] = arr[a][b][c-1] + arr[a][b-1][c-1] - arr[a][b-1][c];
                else
                    arr[a][b][c] = arr[a-1][b][c] + arr[a-1][b-1][c] + arr[a-1][b][c-1] - arr[a-1][b-1][c-1];
            }
        }
    }
    
    for(int a = 0; a < 101; a++){
        for(int b = 0; b < 101; b++){
            for(int c = 0; c < 101; c++){
                _a = a-50;
                _b = b-50;
                _c = c-50;
                if(_a <= 0 || _b <= 0 || _c <= 0)
                    arr[a][b][c] = 1;
                else if(_a > 20 || _b > 20 || _c > 20)
                    arr[a][b][c] = arr[70][70][70];
                else if(a < b && b < c)
                    arr[a][b][c] = arr[a][b][c-1] + arr[a][b-1][c-1] - arr[a][b-1][c];
                else
                    arr[a][b][c] = arr[a-1][b][c] + arr[a-1][b-1][c] + arr[a-1][b][c-1] - arr[a-1][b-1][c-1];
            }
        }
    }

    int a,b,c;
    cin >> a >> b >> c;

    while( a != -1 || b != -1 || c != -1 ){
        printf("w(%d, %d, %d) = %d\n", a, b, c, arr[a+50][b+50][c+50]);
        cin >> a >> b >> c;
    }
    
    return 0;
}
