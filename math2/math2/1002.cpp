//
//  1002.cpp
//  math2
//
//  Created by 임수정 on 03/03/2020.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    int ans[n];
    for(int i = 0 ; i < n ; i++){
        int x1, y1, r1, x2, y2, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        
        double d = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
        if(x1 == x2 && y1 == y2 && r1==r2){
            ans[i] = -1;
            continue;
        }
        if(d > r1+r2 || d + r1 < r2 || d + r2 < r1){
            ans[i] = 0;
        }else if(d == r1+r2 || d == abs(r1-r2)){
            ans[i] = 1;
        }else{
            ans[i] = 2;
        }
    }
    for(int i = 0 ; i < n ; i++)
        cout << ans[i] << "\n";
    return 0;
}
