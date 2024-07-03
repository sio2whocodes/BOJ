//
//  main.swift
//  String
//
//  Created by sujeong on 2024/07/03.
//  Copyright © 2024 임수정. All rights reserved.
//

import Foundation

var str:String = readLine() ?? ""
var bomb:String = readLine() ?? ""

while(true){
    if str.isEmpty {
        print("FRULA")
        break
    }
    let range = str.range(of: bomb)
    if range == nil { break }
    else {
        str.replaceSubrange(range!, with: "")
    }
}

print(str)
