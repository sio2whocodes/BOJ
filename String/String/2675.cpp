//
//  2675.cpp
//  String
//
//  Created by 임수정 on 15/02/2020.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    char ch[20];
    int iter;
    for(int i = 0 ; i < n ; i++){
        cin >> iter;
        cin >> ch;
        for(int j = 0; ch[j] != '\0' ; j++){
            for(int k = 0 ; k < iter ; k++)
                cout << ch[j];
        }
        cout << endl;
    }
    
    return 0;
}
