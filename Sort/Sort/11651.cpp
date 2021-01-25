//
//  11651.cpp
//  Sort
//
//  Created by 임수정 on 15/03/2020.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    pair<int, int> yx[n];
    int x, y;
    for(int i = 0 ; i < n ; i++){
        cin >> x >> y;
        yx[i] = make_pair(y, x);
    }
    sort(yx, yx+n);

    for(int i = 0 ; i < n ; i++)
        cout << yx[i].second << " " << yx[i].first << "\n";
    return 0;
}
