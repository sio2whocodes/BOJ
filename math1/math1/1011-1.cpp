//
//  1011-1.cpp
//  math1
//
//  Created by 임수정 on 29/02/2020.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    for(int i = 0 ; i < t ; i++){
        long X, Y, dis, n = 1;
        cin >> X >> Y;
        dis = Y - X;

        long max = 1;
        while(dis > max){
            max += (n/2) + 1;
            n++;
        }
        cout << n << endl;
    }
    return 0;
}
