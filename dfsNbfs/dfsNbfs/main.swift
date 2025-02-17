//
//  1260.swift
//  dfsNbfs
//
//  Created by sujeong on 2/17/25.
//

import Foundation

func solution() -> [[Int]] {
    
    let input = readLine()!.split(separator: " ").map { Int($0)! }
    let N = input[0]
    let M = input[1]
    let V = input[2]
    
    var adj: [[Int]] = Array<Array<Int>>(repeating: [], count: N+1)
    
    for _ in 0..<M {
        let line = readLine()!.split(separator: " ").map { Int($0)! }
        let A = line[0]
        let B = line[1]
        adj[A] += [B]
        adj[B] += [A]
    }
    
    // preprocess
    for i in 1...N {
        adj[i].sort()
    }
        
    //process : DFS
    var result:[[Int]] = []
    var seq:[Int] = []

    func dfs(_ i:Int, _ visit: inout [Bool]) {
        visit[i] = true
        seq.append(i)

        for node in adj[i] {
            if !visit[node] {
                dfs(node, &visit)
            }
        }
    }
    
    var visit = Array<Bool>(repeating: false, count: N+1)
    dfs(V, &visit)
    result.append(seq)

    // process : BFS
    visit = Array<Bool>(repeating: false, count: N+1) //temp
    var q:[Int] = [V]
    visit[V] = true
    seq = []
    
    while !q.isEmpty {
        let now = q[0]
        q.removeFirst()
        seq += [now]
        for node in adj[now] {
            if !visit[node] {
                visit[node] = true
                q.append(node)
            }
        }
    }
    
    result.append(seq)
        
    return result
}

let sol:[[Int]] = solution()

for s in sol {
    print(s.map { String($0) }.joined(separator: " "))
}
