//
//  2775.cpp
//  math1
//
//  Created by 임수정 on 25/02/2020.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    
    int apart[15][14];
    //0층 뺴고 다 0명으로 초기화
    for(int i = 0 ; i <= 14 ; i++){
        for(int j = 0 ; j < 14 ; j++){
            if(i==0)
                apart[i][j] = j+1;
            else
                apart[i][j] = 0;
        }
    }
    for(int a = 1 ; a <= 14 ; a++){
        for(int b = 0 ; b < 14 ; b++){
            for(int c = 0 ; c <= b ; c++){
                apart[a][b] += apart[a-1][c];
            }
        }
    }
    
    int ans[T];
    for(int i = 0 ; i < T ; i++){
        int K, N;
        cin >> K >> N;
//
//        //이미 계산되어 있으면
//        if(apart[K][N-1] != 0){
//            ans[i] = apart[K][N-1];
//            continue;
//        }
//        //구해야하면
//
        ans[i] = apart[K][N-1];
    }
    for(int i = 0 ; i <= 14 ; i++){
        for(int j = 0 ; j < 14 ; j++){
            cout << apart[i][j] << " ";
        }
        cout << endl;
    }
    for(int i = 0 ; i < T ; i++)
        cout << ans[i] << endl;
    
    return 0;
}


 
