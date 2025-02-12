//
//  main.swift
//  Graph
//
//  Created by sujeong on 2/11/25.
//

import Foundation

func solution() -> [Int] {
    let input = readLine()!.split(separator:" ").map{Int($0)!}
    let N:Int = input[0]
    let M:Int = input[1]
    var degrees:[Int] = Array<Int>(repeating: 0, count: N+1)

    var adj:[[Int]] = Array<Array<Int>>(repeating: [], count:N+1)

    for _ in 0..<M {
        let line = readLine()!.split(separator:" ").map{Int($0)}
        let A = line[0]!
        let B = line[1]!
        degrees[B] += 1
        adj[A].append(B)
    }
    
    var q:[Int] = []
    for i in 1...N {
        if degrees[i] == 0 {
            q.append(i)
        }
    }
    
    var result:[Int] = []
    while(!q.isEmpty) {
        let now = q[0]
        q.removeFirst()
        result.append(now)
        
        for next in adj[now] {
            degrees[next] -= 1
            if degrees[next] == 0 {
                q.append(next)
            }
        }
    }
    
    return result
}


print(solution().map {String($0)}.joined(separator: " "))
