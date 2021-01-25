//
//  main.cpp
//  String
//
//  Created by 임수정 on 15/02/2020.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    
    int N;
    cin >> N;
    
    char str[N];
    cin >> str;
    
    int sum = 0;
    for(int i = 0 ; i < N ; i++){
        sum += str[i]-48;
    }
    cout << sum;
    return 0;
}
