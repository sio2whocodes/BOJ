//
//  10809.cpp
//  String
//
//  Created by 임수정 on 15/02/2020.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    char S[100];
    cin >> S;

    int location[26];

    for(int a = 0 ; a < 26 ; a++){
        location[a] = -1;
        for(int i = 0 ; S[i] != '\0' ; i++){
            if(S[i]-'a' == a){
                location[a] = i;
                break;
            }
        }
    }
    
    for(int i = 0 ; i < 26 ; i++){
        cout << location[i] << " ";
    }
    return 0;
}
