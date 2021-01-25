//
//  1152.cpp
//  String
//
//  Created by 임수정 on 20/02/2020.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    getline(cin, str, '\n');

    int cnt = 0;
    if(str == " "){
        cout << cnt;
        return 0;
    }else{
        for(int i = 1 ; i < str.length()-1 ; i++){
            if(str[i] == ' ')
                cnt++;
        }
    
        cout << cnt+1;
    
        return 0;
    }
}
