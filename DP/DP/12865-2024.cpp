//
//  12865-2024.cpp
//  DP
//
//  Created by sujeong on 2024/07/01.
//  Copyright © 2024 임수정. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    int n, capacity;
    cin >> n >> capacity;
    
    vector<vector<int>> knapsack(n+1, vector<int>(capacity+1, 0));
    
    for(int item = 1 ; item <= n ; item++){
        int weight, value;
        cin >> weight >> value;
        
        for(int cur_cap = 1 ; cur_cap <= capacity ; cur_cap++){
            int total_value_without_item = knapsack[item-1][cur_cap];
            int total_value_with_item = knapsack[item-1][cur_cap - weight] + value;
            
            if(cur_cap < weight || total_value_with_item < total_value_without_item){
                // 배낭에 item 넣지 않음
                knapsack[item][cur_cap] = knapsack[item-1][cur_cap];
            }else{
                // 배낭에 item 넣음
                knapsack[item][cur_cap] = total_value_with_item;
            }
        }
    }
    
    cout << knapsack[n][capacity];
    
    return 0;
}
