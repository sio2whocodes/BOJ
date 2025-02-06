//
//  피로도.swift
//  dfsNbfs
//
//  Created by sujeong on 10/28/24.
//

/*
import Foundation

var answer = 0

func dfs(k:Int, cnt:Int, visit:[Bool], dungeons:[[Int]], n:Int) {
    // 종료여부 확인: 더이상 어느 던전도 방문할 수 없음
    if cnt == dungeons.count {
        if answer < cnt {
            answer = cnt
        }
        return
    }
    
    var keepable:Bool = false
    var _visit = visit
    for i in range(dungeons.count) {
        var needK = dg[i][0]
        var useK = dg[i][1]
        if k >= needK {
            keepable = true
            // 이 던전을 가는 경우
            _visit[idx] = true
            dfs(k-useK, cnt+1, _visit, dungeons)
            break
        }
        // 이 던전 안가는 경우
        dfs(k, cnt, visit, dungeons)
    }
    
    if !keepable {
        if answer < cnt {
            answer = cnt
        }
        return
    }
}

func solution(_ k:Int, _ dungeons:[[Int]]) -> Int {
    
    var visit: Array<Bool>(repeating: false, count: dungeons.count)
    dfs(k, 0, visit, dungeons)
    
    return answer
}

*/
