//
//  11053.cpp
//  math3
//
//  Created by 임수정 on 2020/07/25.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int cnt = 1;
    int num;
    cin >> num;
    int rec = num;
    for(int i = 0 ; i < n-1 ; i++){
        cin >> num;
        if(rec < num){
            cnt++;
            rec = num;
        }
    }
    cout << cnt;
    
    return 0;
}
