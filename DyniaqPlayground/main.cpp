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

/*
Given a string, compute a new string by moving the first char to come after the next two chars,
so "abc" yields "bca". Repeat this process for each subsequent group of 3 chars,
so "abcdef" yields "bcaefd". Ignore any group of fewer than 3 chars at the end.
 
oneTwo("abc") → "bca"
oneTwo("tca") → "cat"
oneTwo("tcagdo") → "catdog"
*/

int main() {
    assert(oneTwo("abc") == "bca");
    assert(oneTwo("tca") == "cat");
    assert(oneTwo("tcagdo") == "catdog");
    return 0;
}
