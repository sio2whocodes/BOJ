//
//  2460.cpp
//  implement
//
//  Created by sujeong on 7/24/24.
//

#include <iostream>
using namespace std;

int main() {
    
    int total = 0;
    int max = 0;
    
    for(int i = 0 ; i < 10 ; i++){
        int out, in;
        cin >> out >> in;
        
        total -= out;
        total += in;
        
        if(max < total){
            max = total;
        }
    }
    
    cout << max;
    return 0;
}
