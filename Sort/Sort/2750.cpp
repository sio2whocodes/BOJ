//
//  main.cpp
//  Sort
//
//  Created by 임수정 on 10/03/2020.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int arr[n];
    for(int i = 0 ; i < n ; i++)
        cin >> arr[i];
    
    int currentMin;
    int minIndex;
    for(int i = 0 ; i < n-1 ; i++){
        currentMin = arr[i];
        minIndex = i;
        for(int j = i+1 ; j < n ; j++){
            if(currentMin > arr[j]){
                currentMin = arr[j];
                minIndex = j;
            }
        }
        if(minIndex != i){
            int temp = arr[minIndex];
            arr[minIndex] = arr[i];
            arr[i] = temp;
        }
    }
    
    for(int i = 0 ; i < n ; i++)
        cout << arr[i] << "\n";
    
    return 0;
}
