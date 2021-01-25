//
//  fractional_knapsack.cpp
//  Greedy
//
//  Created by 임수정 on 2020/09/22.
//  Copyright © 2020 임수정. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
typedef struct {
   int v;
   int w;
   float d;
} Item;

void input(Item items[], int sizeOfItems) {
   cout << "Enter total " << sizeOfItems << " item's values and weight" << "\n";
   for (int i = 0; i < sizeOfItems; i++) {
      cout << "Enter " << i + 1 << " V ";
      cin >> items[i].v;
      cout << "Enter " << i + 1 << " W ";
      cin >> items[i].w;
   }
}

void display(Item items[], int sizeOfItems) {
   int i;
   cout << "Values: ";
   for (i = 0; i < sizeOfItems; i++)
      cout << items[i].v << "\t";
   
   cout << "\nWeight: ";
   for (i = 0; i < sizeOfItems; i++)
      cout << items[i].w << "\t";
   
   cout << "\n";
}

//필요시 함수 작성

float knapsack(Item items[], int sizeOfItems, int W) {
   float totalValue = 0, totalWeight = 0;
   /*
      각자 작성해보기
   */
   cout << "Total weight in bag " << totalWeight << "\n";
   return totalValue;
}

int main() {
   int W;
   Item items[4];
   input(items, 4);
   cout << "Entered data \n";
   display(items, 4);
   cout << "Enter Knapsack weight ";
   cin >> W;
   float mxVal = knapsack(items, 4, W);
   cout << "Max value for " << W << " weight is " << mxVal;
}
