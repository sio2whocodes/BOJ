//
//  11650-1.cpp
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
    
    pair<int, int> xy[n];
    int x, y;
    for(int i = 0 ; i < n ; i++){
        cin >> x >> y;
        xy[i] = make_pair(x, y);
    }
    sort(xy, xy+n);

    for(int i = 0 ; i < n ; i++)
        cout << xy[i].first << " " << xy[i].second << "\n";
    return 0;
}
