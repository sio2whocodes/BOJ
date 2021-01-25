//
//  2775-hi.cpp
//  math1
//
//  Created by 임수정 on 14/03/2020.
//  Copyright © 2020 임수정. All rights reserved.
//
#include <iostream>
using namespace std;

int T;
int a[13][13];

int main() {
   scanf("%d", &T);
   for (int i = 0; i < 13; i++) {
      for (int j = 0; j <= i; j++) {
         if (j == 0) a[i][j] = i + 2;
         else if (j == i) a[i][j] = 2 * a[i][j - 1];
         else a[i][j] = a[i][j - 1] + a[i - 1][j];
         a[j][i] = a[i][j];
      }
   }
   
   for (int i = 0; i < T; i++) {
      int k, n;
      scanf("%d %d", &k, &n);
      if (n == 1) printf("%d\n", 1);
      else printf("%d\n", a[k][n - 2]);
   }

   return 0;
}
