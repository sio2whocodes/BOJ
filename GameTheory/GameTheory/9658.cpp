//
//  9658.cpp
//  GameTheory
//
//  Created by 임수정 on 2021/08/11.
//

#include <iostream>
using namespace std;

int main(){
    //input
    int N;
    cin >> N;
    
    //process & output
    if ( N % 7 == 1 || N % 7 == 3){
        cout << "CY\n";
    }else{
        cout << "SK\n";
    }
    return 0;
}
