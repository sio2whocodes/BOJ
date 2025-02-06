//
//  16916.swift
//  String
//
//  Created by sujeong on 2/6/25.
//  Copyright © 2025 임수정. All rights reserved.
//

import Foundation

func solution() -> Int {
    let S:[String] = Array(readLine()!.map{String($0)})
    let P:[String] = Array(readLine()!.map{String($0)})
    
    func getPi(_ P: [String]) -> [Int] {
        let m = P.count
        var j = 0
        var pi:[Int] = Array<Int>(repeating: 0, count: m)
        for i in 1..<m {
            while j > 0 && P[i] != P[j] {
                j = pi[j-1]
            }
            if P[i] == P[j] {
                j += 1
                pi[i] = j
            }
        }
        return pi
    }
    
    let pi = getPi(P)
    
    var j = 0
    for (i,_) in S.enumerated() {
        while j > 0 && S[i] != P[j] {
            j = pi[j-1] // 다르면 j를 수미상관되는 구간 다음 문자열을 가리키도록 이동 (i는 그대로)
        }
        // j가 0이 되거나, S[i],P[j]가 같으면 나옴
        if S[i] == P[j] {
            j += 1
            if j == P.count {
                return 1
            }
        }
    }
    return 0
}

print(solution())
