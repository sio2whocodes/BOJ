//
//  4153.cpp
//  math2
//
//  Created by 임수정 on 03/03/2020.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    while(1){
        int len[3];
        cin >> len[0] >> len[1] >> len[2];
        if(len[0] + len[1] + len[2] == 0)
            break;
        sort(len, len+3);
        cout << (len[0]*len[0] + len[1]*len[1] == len[2]*len[2] ? "right" : "wrong") << "\n";
    }
    
    return 0;
}
