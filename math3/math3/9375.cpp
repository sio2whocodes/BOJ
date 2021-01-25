//
//  9375.cpp
//  math3
//
//  Created by 임수정 on 2020/07/15.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(){
    int c,n;
    cin >> c;
    for(int i = 0 ; i < c ; i++){
        //테스트 케이스
        string name;
        int clothes[30] = {0,};
        string cate[30];
        string catego;
        int cnt = 0;
        bool isin = false;
        cin >> n;
        for(int j = 0 ; j < n ; j++){
            cin >> name >> catego;
            isin = false;
            for(int k = 0 ; k < cnt; k++){
                if(cate[k] == catego){
                    clothes[k]++;
                    isin = true;
                }
            }
            if(!isin){
                //종류 추가
                cate[cnt] = catego;
                clothes[cnt++]++;
            }
        }
        int result = 1;
        for(int s = 0 ; s < cnt ; s++){
            result *= (clothes[s]+1);
        }
        cout << result - 1 << "\n";
    }
    
    return 0;
}
