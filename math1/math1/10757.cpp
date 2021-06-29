//
//  10757.cpp
//  math1
//
//  Created by 임수정 on 2021/03/16.
//  Copyright © 2021 임수정. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string A,B;
    cin >> A >> B;
    vector<int> result(max(A.length(),B.length())+1,0);
    cout << A << endl;
    cout << B << endl;
    
    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());
    
    for(int i = 0 ; i < min(A.length(),B.length()) ; i++){
        int sum = (A[i]-'0')+(B[i]-'0');
        if (sum+result[i] < 10){
            result[i] += sum;
        } else {
            result[i] += sum % 10;
            result[i+1] += 1;
        }
    }
//    if(result[min(A.length(),B.length())]+)
    for(long i = min(A.length(),B.length()); i < max(A.length(),B.length()); i++){
        result[i] += A.length() <= B.length() ? B[i] : A[i];
    }
    
    
    for(int i = 0 ; i < result.size()-1 ; i++){
        cout << result[i];
    }
    if(result[result.size()-1] != 0){
        cout << result[result.size()-1];
    }
    return 0;
}
