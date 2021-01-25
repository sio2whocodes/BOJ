//
//  2751.cpp
//  Sort
//
//  Created by 임수정 on 17/03/2020.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int arr[n];
    for(int i = 0 ; i < n ; i++)
        cin >> arr[i];
    
    sort(arr, arr+n);
    
    for(int i = 0 ; i < n ; i++)
        cout << arr[i] << "\n";
    
    return 0;
}
