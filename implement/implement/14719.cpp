//
//  14719.cpp
//  implement
//
//  Created by sujeong on 8/1/24.
//

#include <iostream>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    
    int result = 0;
    
    int tmp = 0;
    int col[W];
    int curMaxIdx = 0;
    int max = 0;
    for (int i = 0; i < W; i++){
        cin >> col[i];
        if(max <= col[i]){
            curMaxIdx = i;
            max = col[i];
            
            result += tmp;
            tmp = 0;
        } else {
            tmp += max-col[i];
        }
    }
    
    tmp = 0;
    int rMaxIdx = W-1;
    max = 0;
    for(int i = W-1; i >= curMaxIdx; i--){
        if(max <= col[i]){
            rMaxIdx = i;
            max = col[i];
            
            result += tmp;
            tmp = 0;
        } else {
            tmp += max-col[i];
        }
    }
    
    cout << result;
    
    return 0;
}
