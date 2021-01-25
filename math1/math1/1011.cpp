//
//  1011.cpp
//  math1
//
//  Created by 임수정 on 26/02/2020.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int T;
    cin >> T;
    
    for(int i = 0 ; i < T ; i++){
        long x, y;
        cin >> x >> y;
        long dis = y-x;

        if(dis >= 0 && dis <= 2){
            cout << dis << endl;
            continue;
        }
        
        int n = 1;
        while(1){
            long long an = n*n - n + 1;
            if( an > dis ){
                break;
            }
            n++;
        }
        n--;
        long long pi = dis - n*n + n;
        if(pi <= n){
            cout << 2*n-1 << endl;
        }else{
            cout << 2*n << endl;
        }
    }
    return 0;
}
