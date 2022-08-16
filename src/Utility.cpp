//
// Created by keylo on 16/8/2022.
//

#include "Utility.h"

int Utility::strToInt(const string& str) {
    int num = 0;
    for(char i : str) {
        num *= 10;
        num += i-'0';
    }
    return num;
}