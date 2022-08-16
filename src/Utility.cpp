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

double Utility::deduction(int salary) {
    double totalDeduction;
    if(salary > 950000){
        totalDeduction = (salary * 0.09) + ((salary-950000) * 0.05);
    } else{
        totalDeduction = (salary * 0.09);
    }

    return totalDeduction;
}


