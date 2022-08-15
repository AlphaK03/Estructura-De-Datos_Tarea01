//
// Created by Key Cortés on 25/4/2022.
//

#ifndef LAB04_DATAFLOW_ALPHAK03_ITEXTPROCESS_H
#define LAB04_DATAFLOW_ALPHAK03_ITEXTPROCESS_H
#include "iostream"
#include "fstream"
#include "Person.h"
#include "vector"
#include "List.h"

using namespace std;

class ITextProcess {
public:
    ITextProcess() = default;
    virtual ~ITextProcess()= default;

    virtual List dataReadingProcess(string) = 0;
    virtual void dataWritingProcess(string, List) = 0;
};


#endif //LAB04_DATAFLOW_ALPHAK03_ITEXTPROCESS_H
