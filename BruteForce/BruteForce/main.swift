//
//  3085.swift
//  BruteForce
//
//  Created by sujeong on 2/12/25.
//  Copyright © 2025 임수정. All rights reserved.
//

import Foundation

func solution() -> Int {
    var result:Int = 0
    var map:[[Character]] = []
    let N:Int = Int(readLine()!) ?? 1
    
    for _ in 0..<N {
        let line:[Character] = Array(String(readLine()!))
        map.append(line)
    }
    
    // 초기 상태에 가장 긴 연속 사탕 수 구하기
    for r in 0..<N {
        for c in 0..<N {
            // r,c start (같은 행)
            var target = map[r][c]
            var cnt = 1
            var cc = c-1 // 옮겨가면서 최대 길이 체크
            while cc >= 0 {
                if map[r][cc] == target {
                    cnt += 1
                    cc -= 1
                } else {
                    break
                }
            }
            cc = c+1
            while cc < N {
                if map[r][cc] == target {
                    cnt += 1
                    cc += 1
                } else {
                    break
                }
            }
            if cnt > result {
                result = cnt
            }
            
            // r,c start (같은 열)
            cnt = 1
            var cr = r-1 // 옮겨가면서 최대 길이 체크
            while cr >= 0 {
                if map[cr][c] == target {
                    cnt += 1
                    cr -= 1
                } else {
                    break
                }
            }
            cr = r+1
            while cr < N {
                if map[cr][c] == target {
                    cnt += 1
                    cr += 1
                } else {
                    break
                }
            }
            if cnt > result {
                result = cnt
            }
        }
    }
    
    let dr = [-1,1,0,0]
    let dc = [0,0,-1,1]
    // process
    // 1. 바꿀 수 있는 두 캔디 찾기
    // 2. 바꿔서 최대 길이 달라지는지 확인
    for r in 0..<N {
        for c in 0..<N {
            // 상하좌우
            for i in 0..<4 {
                let nr = r + dr[i]
                let nc = c + dc[i]
                if nr >= 0 && nr < N && nc >= 0 && nc < N && map[r][c] != map[nr][nc] {
                    // 다른 캔디면 교환하고 최대 길이 갱신
                    // 교환
                    let temp = map[nr][nc]
                    map[nr][nc] = map[r][c]
                    map[r][c] = temp
                    // r,c start
                    // 같은 행
                    var target = map[r][c]
                    var cnt = 1
                    var cc = c-1 // 옮겨가면서 최대 길이 체크
                    while cc >= 0 {
                        if map[r][cc] == target {
                            cnt += 1
                            cc -= 1
                        } else {
                            break
                        }
                    }
                    cc = c+1
                    while cc < N {
                        if map[r][cc] == target {
                            cnt += 1
                            cc += 1
                        } else {
                            break
                        }
                    }
                    if cnt > result {
                        result = cnt
                    }
                    // 같은 열
                    cnt = 1
                    var cr = r-1 // 옮겨가면서 최대 길이 체크
                    while cr >= 0 {
                        if map[cr][c] == target {
                            cnt += 1
                            cr -= 1
                        } else {
                            break
                        }
                    }
                    cr = r+1
                    while cr < N {
                        if map[cr][c] == target {
                            cnt += 1
                            cr += 1
                        } else {
                            break
                        }
                    }
                    if cnt > result {
                        result = cnt
                    }
                    // r,c end
                    
                    // nr,nc start
                    // 같은 행
                    target = map[nr][nc]
                    cnt = 1
                    cc = nc-1 // 옮겨가면서 최대 길이 체크
                    while cc >= 0 {
                        if map[nr][cc] == target {
                            cnt += 1
                            cc -= 1
                        } else {
                            break
                        }
                    }
                    cc = nc+1
                    while cc < N {
                        if map[nr][cc] == target {
                            cnt += 1
                            cc += 1
                        } else {
                            break
                        }
                    }
                    if cnt > result {
                        result = cnt
                    }
                    // 같은 열
                    cnt = 1
                    cr = nr-1 // 옮겨가면서 최대 길이 체크
                    while cr >= 0 {
                        if map[cr][nc] == target {
                            cnt += 1
                            cr -= 1
                        } else {
                            break
                        }
                    }
                    cr = nr+1
                    while cr < N {
                        if map[cr][nc] == target {
                            cnt += 1
                            cr += 1
                        } else {
                            break
                        }
                    }
                    if cnt > result {
                        result = cnt
                    }
                    // nr,nc end
                    
                    // 다시 교환
                    map[r][c] = map[nr][nc]
                    map[nr][nc] = temp
                }
            }
        }
    }
    
    return result
}

print(solution())
