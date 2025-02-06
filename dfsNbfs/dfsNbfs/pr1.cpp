//
//  pr1.cpp
//  dfsNbfs
//
//  Created by sujeong on 1/8/25.
//

#include <iostream>
using namespace std;

int main() {
    int n = 529;
    int len = 0;
    int result = 0;
    bool start = false;
    
    while(n > 0){
        if(start && n % 2 == 0){
            len++;
        }else if(n % 2 == 1){
            start = true;
            if(result < len){
                result = len;
            }
            len = 0;
        }
        n /= 2;
    }
    
    cout << result;
    
    return 0;
}
