//
//  17144.cpp
//  implement
//
//  Created by sujeong on 7/9/24.
//

#include <iostream>
using namespace std;

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int A[51][51];
int _A[51][51];

int main(){
    int origin_r = 0;
    int R, C, T;
    cin >> R >> C >> T;
    for(int r = 0 ; r < R ; r++){
        for(int c = 0 ; c < C ; c++){
            cin >> A[r][c];
            if(A[r][c] == -1){
                origin_r = r;
            }
        }
    }
    
    for(int t = 1; t <= T ; t++){
        // 미세먼지 확산
        for(int r = 0; r < R; r++){
            for(int c = 0; c < C; c++){
                if(A[r][c] <= 0) continue;
                int count = 0;
                for(int k = 0; k < 4; k++){
                    int nr = r + dy[k];
                    int nc = c + dx[k];
                    if(nr < 0 || nr >= R || nc < 0 || nc >= C || A[nr][nc] == -1) continue;
                    count++;
                    _A[nr][nc] += (A[r][c] / 5);
                }
                _A[r][c] -= ((A[r][c] / 5) * count);
            }
        }
        
        for(int r = 0 ; r < R ; r++){
            for(int c = 0 ; c < C ; c++){
                A[r][c] += _A[r][c];
                _A[r][c] = 0;
            }
        }
        
//        for(int r = 0 ; r < R ; r++){
//            for(int c = 0 ; c < C ; c++){
//                cout << A[r][c] << " ";
//            }
//            cout << "\n";
//        }
        
        for(int r = origin_r-2; r > 0 ; r--)
            A[r][0] = A[r-1][0];
        for(int c = 0; c < C-1 ; c++)
            A[0][c] = A[0][c+1];
        for(int r = 1; r <= origin_r-1 ; r++)
            A[r-1][C-1] = A[r][C-1];
        for(int c = C-1 ; c > 1 ; c--)
            A[origin_r-1][c] = A[origin_r-1][c-1];
        A[origin_r-1][1] = 0;
        
        for(int r = origin_r + 1; r < R-1 ; r++)
            A[r][0] = A[r+1][0];
        for(int c = 0; c < C-1 ; c++)
            A[R-1][c] = A[R-1][c+1];
        for(int r = R-1; r >= origin_r ; r--)
            A[r][C-1] = A[r-1][C-1];
        for(int c = C-1 ; c > 1 ; c--)
            A[origin_r][c] = A[origin_r][c-1];
        A[origin_r][1] = 0;
        
    }
    
    int sum = 0;
    for(int r = 0 ; r < R ; r++){
        for(int c = 0 ; c < C ; c++){
            if(A[r][c] > 0)
                sum += A[r][c];
        }
    }
    cout << sum;
    return 0;
}
