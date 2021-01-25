//
//  1085.cpp
//  math2
//
//  Created by 임수정 on 03/03/2020.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int x, y, w, h;
    cin >> x >> y >> w >> h;
    
    cout << min(min(min(x, y), w-x),h-y);
    return 0;
}
