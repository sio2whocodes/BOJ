//
//  1316.cpp
//  String
//
//  Created by 임수정 on 24/02/2020.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int cnt = 0;
    //문자열 하나 처리
    for(int i = 0 ; i < n ; i++){
        char str[100];
        cin >> str;
        //나왔었는지 체크하는 배열
        bool ischeck[26];
        for(int k = 0 ; k < 26 ; k++){
            ischeck[k] = false;
        }
        //그룹단어인지 체크하는 변수
        bool isgroup = true;
        //한글자마다 체크
        for(int j = 0 ; j< strlen(str)-1 ; j++){
            if(str[j] != str[j+1]){
                if(ischeck[str[j]-'a']){
                    isgroup = false;
                    break;
                }
                ischeck[str[j]-'a'] = true;
            }
        }
        //마지막 글자 체크
        if(ischeck[str[strlen(str)-1]-'a'])
            isgroup = false;
        
        //최종적으로 그룹단어인지 체크
        if(isgroup){
            cnt++;
        }
    }
    cout << cnt;
    
    return 0;
}
