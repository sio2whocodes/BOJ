//
//  1934.cpp
//  BinarySearch
//
//  Created by 임수정 on 2021/01/04.
//

#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    int A,B;
    
    for(int i = 0 ; i < T ; i++){
        cin >> A >> B;
        while(A%B != 0){
            A = B;
            B = A%B;
        }
        cout << A%B << "\n";
    }
    return 0;
}
