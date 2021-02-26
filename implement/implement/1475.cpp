//
//  main.cpp
//  implement
//
//  Created by 임수정 on 2021/02/26.
//
//https://www.acmicpc.net/problem/1475
//https://sio2whocode.tistory.com/99

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main(){
    int roomNum;
    cin >> roomNum;
    vector<int> needNum(10,0);
    if(roomNum == 0){
        cout << 1;
    }
    while(roomNum != 0){
        needNum[roomNum % 10]++;
        roomNum /= 10;
    }
    needNum[6] = ceil((needNum[6]+needNum[9])/2.0);
    needNum[9] = 0;

    int max = needNum[0];
    for(int i = 1 ; i <= 9 ; i++){
        if(max < needNum[i])
            max = needNum[i];
    }
    cout << max;
    return 0;
}
