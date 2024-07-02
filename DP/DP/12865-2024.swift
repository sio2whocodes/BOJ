//
//  12865-2024.swift
//  DP
//
//  Created by sujeong on 2024/07/01.
//  Copyright © 2024 임수정. All rights reserved.
//

import Foundation

let inputs = readLine()?.split(separator: " ")
let n:Int = Int(inputs![0])!
let cap:Int = Int(inputs![1])!

var arr: [[Int]] = Array(repeating: Array(repeating: 0, count: cap+1), count: n+1)

var weight = 0
var value = 0

for i in 1...n {
    let input = readLine()?.split(separator: " ")
    weight = Int(input![0])!
    value = Int(input![1])!
    
    for j in 1...cap {
        if ( j < weight || arr[i-1][j] > arr[i-1][j-weight]+value ) {
            arr[i][j] = arr[i-1][j]
        } else {
            arr[i][j] = arr[i-1][j-weight]+value
        }
    }
}

print(arr[n][cap])
