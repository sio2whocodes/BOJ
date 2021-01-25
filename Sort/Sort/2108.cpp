//
//  2108.cpp
//  Sort
//
//  Created by 임수정 on 13/03/2020.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int freq[8001];
int main(){
    int n;
    cin >> n;
    
    int num[n];
    for(int i = 0 ; i < n ; i++){
        cin >>num[i];
        freq[num[i]+4000]++;
    }
    
    //산술평균
    int sum=0;
    for(int i = 0 ; i < n ; i++)
        sum += num[i];
    cout << fixed;
    cout.precision(0);
    cout << (double)sum/n << "\n";
    //중앙값
    sort(num, num+n);
    cout << num[n/2] << "\n";
    //최빈값
    int max = freq[0]; //최빈값의 빈도
    int maxIndex = 0; //최빈값+4000
    int cnt = 0; //최빈값의 개수
    int sec = 0; //최빈값중 두번째로 작은 값
    for(int i = 0 ; i < 8001 ; i++){
        if(max < freq[i]){
            maxIndex = i;
            max = freq[i];
            cnt = 1;
        }
        else if(max == freq[i]){
            cnt++;
            if(cnt == 2){
                sec = i;
            }
        }
    }
    if(cnt > 1)
        cout << sec - 4000 << "\n";
    else
        cout << maxIndex - 4000 << "\n";
    //범위
    cout << num[n-1]-num[0];
    
    return 0;
}
