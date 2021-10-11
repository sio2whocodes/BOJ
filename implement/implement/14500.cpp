//
//  14500.cpp
//  implement
//
//  Created by 임수정 on 2021/10/11.
//
//https://sio2whocode.tistory.com/156
//https://www.acmicpc.net/problem/14500

#include <iostream>
#include <vector>
using namespace std;

struct Pos{
    int r;
    int c;
    Pos(int r, int c){
        this->r = r;
        this->c = c;
    }
};

int N, M;
vector<vector<int>> map;
Pos blocks[19][4] = {
    {Pos(0,0), Pos(0,1), Pos(0,2), Pos(0,3)},
    {Pos(0,0), Pos(1,0), Pos(2,0), Pos(3,0)},
    {Pos(0,0), Pos(0,1), Pos(1,0), Pos(1,1)},
    {Pos(0,0), Pos(1,0), Pos(2,0), Pos(2,1)},
    {Pos(0,1), Pos(1,1), Pos(2,1), Pos(2,0)},
    {Pos(0,0), Pos(0,1), Pos(0,2), Pos(1,0)},
    {Pos(0,0), Pos(0,1), Pos(1,0), Pos(2,0)},
    {Pos(0,0), Pos(0,1), Pos(1,1), Pos(2,1)},
    {Pos(0,2), Pos(1,0), Pos(1,1), Pos(1,2)},
    {Pos(0,0), Pos(1,0), Pos(1,1), Pos(2,1)},
    {Pos(0,1), Pos(1,1), Pos(1,0), Pos(2,0)},
    {Pos(0,1), Pos(0,2), Pos(1,0), Pos(1,1)},
    {Pos(0,0), Pos(0,1), Pos(1,1), Pos(1,2)},
    {Pos(0,1), Pos(1,0), Pos(1,1), Pos(1,2)},
    {Pos(0,1), Pos(1,0), Pos(1,1), Pos(2,1)},
    {Pos(0,0), Pos(1,0), Pos(2,0), Pos(1,1)},
    {Pos(0,0), Pos(0,1), Pos(0,2), Pos(1,1)},
    {Pos(0,0), Pos(1,0), Pos(1,1), Pos(1,2)},
    {Pos(0,0), Pos(0,1), Pos(0,2), Pos(1,2)}
};


int main(){
    //input

    cin >> N >> M;
    map.resize(N);
    for(int i = 0 ; i < N ; i++)
        map[i].resize(M);
    
    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < M ; j++){
            cin >> map[i][j];
        }
    }
    
    
    //process
    
    int result = 0;
    //한 블록씩 계산
    for(int b = 0 ; b < 19 ; b++){
        //맵 어디에 두어야 최대값인지 구하기
        int max = 0;
        //sr, sc : 시작점
        for(int sr = 0 ; sr < N ; sr++){
            for(int sc = 0 ; sc < M ; sc++){
                //sr,sc에서 시작하는 한 블록 점수 계산
                int sum = 0;
                for(int i = 0 ; i < 4 ; i++){
                    Pos here = Pos(sr + blocks[b][i].r, sc + blocks[b][i].c);
                    if(here.r < 0 || here.r > N-1){
                        sum = 0;
                        break;
                    }
                    if(here.c < 0 || here.c > M-1){
                        sum = 0;
                        break;
                    }
                    sum += map[here.r][here.c];
                }
                if(sum > max){
                    max = sum;
                }
            }
        }
        if(result < max){
            result = max;
        }
    }
    
    cout << result;
    
    return 0;
}
