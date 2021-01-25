//
//  main.cpp
//  BruteForce
//
//  Created by 임수정 on 05/03/2020.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int T, max;
    cin >> T >> max;
    
    int arr[T];
    for(int i = 0 ; i < T ; i++)
        cin >> arr[i];
    
    int sum = 0;
    int currentMax = 0;
    for(int i = 0 ; i < T-2 ; i++){
        for(int j = i+1 ; j < T-1 ; j++){
            for(int k = j+1 ; k < T ; k++){
                sum = arr[i]+arr[j]+arr[k];
                if(currentMax < sum && sum <= max)
                    currentMax = sum;
            }
        }
    }
    cout << currentMax;
    return 0;
}
