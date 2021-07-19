//
//  test.cpp
//  back tracking
//
//  Created by 임수정 on 2021/07/13.
//  Copyright © 2021 임수정. All rights reserved.
//

#include <iostream>
using namespace std;

bool ischeck[4] = {false,};
int re[4];

int* f(int cnt, int gs[]){
    if(cnt == 4){
        return re;
    }
    else{
        for(int i = 0 ; i < 4 ; i++){
            if(!ischeck[i]){
                ischeck[i] = true;
                re[cnt] = gs[i];
                f(cnt+1,gs);
                ischeck[i] = false;
            }
        }
    }
    return re;
}
int main(){
    int guess[4] = {8,9,7,5};
    int N = 4;
    
    for(int l=0;l<N;l++){
        for(int i=0;i<N;i++){
            if(l==i) continue;
            for(int j=0;j<N;j++){
                if(i==j) continue;
                if(l==j) continue;
                for(int k=0;k<N;k++){
                    if(i==k) continue;
                    if(j==k) continue;
                    if(l==k) continue;
                    cout << l << i << j << k << endl;
                }
            }
        }
    }
    cout << "+=====" << endl;
    int cnt = 0;
    for(int i = 0 ; i <= 9 ; i++){
        guess[0] = i;
        for(int j = i+1 ; j <= 9 ; j++){
            guess[1] = j;
            for(int k = j+1 ; k <= 9 ; k++){
                guess[2] = k;
                for(int l = k+1 ; l <= 9 ; l++){
                    guess[3] = l;
                    cout << i << j << k << l << endl;
                    
                    cnt++;
                }
            }
        }
    }
    cout << cnt << endl;
    return 0;
}

#define N 4

 

typedef struct {
    int hit;
    int miss;
} Result;

// API


//extern Result query(int guess[]);
void doUserImplementation(int guess[]) {
    for(int i = 0 ; i <= 9 ; i++){
        guess[0] = i;
        for(int j = i+1 ; j <= 9 ; j++){
            guess[1] = j;
            for(int k = j+1 ; k <= 9 ; k++){
                guess[2] = k;
                for(int l = k+1 ; l <= 9 ; l++){
                    guess[3] = l;
                    Result result = query(guess);
                    if(result.hit == N){
                        return;
                    }else if(result.hit + result.miss == N){
                        //순서 구하러
                        for(int a=0;a<N;a++){
                            for(int b=0;b<N;b++){
                                if(a==b) continue;
                                for(int c=0;c<N;c++){
                                    if(b==c) continue;
                                    if(a==c) continue;
                                    for(int d=0;d<N;d++){
                                        if(b==d) continue;
                                        if(c==d) continue;
                                        if(a==d) continue;
                                        int param[4] = {guess[a],guess[b],guess[c],guess[d]};
//                                      result = query(param);
                                        if(result.hit == 4){
                                            return;
                                        }
                                    }
                                }
                            }
                        }
                    }else{
                        continue;
                    }
                }
            }
        }
    }
    
           // Implement a user's implementation function

           //

           // The array of guess[] is a return array that

           // is your guess for what digits[] would be.

}
