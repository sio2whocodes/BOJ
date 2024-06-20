//
//  18406.swift
//  implement
//
//  Created by sujeong on 2024/06/20.
//
//https://www.acmicpc.net/problem/18406

import Foundation

let inputs:String = readLine()!
let arr:[Int] = inputs.map { $0.wholeNumberValue! }
print(arr.prefix(arr.count/2).reduce(0) { $0 + $1 } == arr.suffix(arr.count/2).reduce(0) { $0 + $1 } ? "LUCKY" : "READY")
