//
//  11659.cpp
//  math1
//
//  Created by 임수정 on 2021/01/11.
//  Copyright © 2021 임수정. All rights reserved.
//

#include <iostream>
using namespace std;
int sum[100001];
int main(){
    int N, I, s,e;
    cin >> N >> I;
    int num[N+1];
    for(int i = 1 ; i <= N ; i++){
        cin >> num[i];
        if(i == 1){
            sum[i] = num[i];
        }else{
            sum[i] = sum[i-1]+num[i];
        }
    }
    for(int i = 0 ; i < I ; i++){
        cin >> s >> e;
        if(s>1){
            cout << sum[e] - sum[s-1] << "\n";
        }else{
            cout << sum[e] << "\n";
        }
    }
    
    return 0;
}
