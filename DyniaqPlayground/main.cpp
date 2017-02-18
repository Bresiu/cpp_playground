//
//  main.cpp
//  DyniaqPlayground
//
//  Created by Michal Brewczak on 17/02/2017.
//  Copyright © 2017 Michal Brewczak. All rights reserved.
//
#include <string>
#include <sstream>
#include <assert.h>
using namespace std;

string oneTwo(string str) {
    stringstream stringStream;
    for (int i = 0; i < str.length() - 2; i += 3) {
        stringStream << str[i + 1] << str[i + 2] << str[i];
    }
    return stringStream.str();;
}

int main() {
    assert(oneTwo("abc") == "bca");
    assert(oneTwo("tca") == "cat");
    assert(oneTwo("tcagdo") == "catdog");
    return 0;
}
