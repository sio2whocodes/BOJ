//
//  3009.cpp
//  math2
//
//  Created by 임수정 on 03/03/2020.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int points[3][2];
    for(int i = 0 ; i < 3 ; i++){
        cin >> points[i][0] >> points[i][1];
    }
    
    for(int i = 0 ; i < 2 ; i++){
        for(int j = i+1 ; j < 3 ; j++){
            if(points[i][0] == points[j][0]){
                if( points[i][1] ==  points[3-i-j][1] )
                    cout << points[3-i-j][0] << " " << points[j][1];
                else
                    cout << points[3-i-j][0] << " " << points[i][1];
            }
        }
    }
    return 0;
}
