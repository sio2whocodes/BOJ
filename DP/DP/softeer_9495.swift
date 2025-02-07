//
//  main.swift
//  DP
//
//  Created by sujeong on 2/7/25.
//  Copyright © 2025 임수정. All rights reserved.
//

import Foundation
// DP 풀이 - 통과
func solution() -> Int {
    var PC:[[Int]] = []

    let N = Int(readLine()!)!
    var dp:[[Int]] = Array(repeating: Array<Int>(repeating: 0, count: 2), count: N)
    
    for _ in 0..<N {
        PC.append(readLine()!.split(separator:" ").map { Int($0)! })
    }

    // DP 초기 설정
    dp[0][0] = abs(PC[0][0] - 0) <= PC[0][1] ? 1 : 0
    
    for i in 1..<N {
        let pi = PC[i][0]
        let ci = PC[i][1]
        // i-1을 만나고 i만나는 경우
        var curX0 = abs(pi - dp[i-1][0]) <= ci ? dp[i-1][0]+1 : dp[i-1][0]
        // i-1을 안만나고 i만나는 경우
        var curX1 = abs(pi - dp[i-1][1]) <= ci ? dp[i-1][1]+1 : dp[i-1][1]
        dp[i][0] = max(curX0, curX1)
        // i를 안만나는 경우
        dp[i][1] = max(dp[i-1][0], dp[i-1][1])
    }
    
    return max(dp[N-1][0], dp[N-1][1])
}

//print(solution())

// DFS 풀이 - 시간초과
/*
var PC:[[Int]] = []
var result:Int = 0

func dfs(_ x:Int, _ i:Int, _ N:Int) {
    if i == N {
        if result < x {
            result = x
        }
        return
    }

    var j = i
    while j < N && abs(PC[j][0]-x) > PC[j][1] {
        j += 1
    }
    if j == N {
        return
    }
    dfs(x+1, j+1, N)
    dfs(x, j+1, N)
}

let N = Int(readLine()!)!
    
for _ in 0..<N {
    PC.append(readLine()!.split(separator:" ").map { Int($0)! })
}

dfs(0,0,N)

print(result)
*/

