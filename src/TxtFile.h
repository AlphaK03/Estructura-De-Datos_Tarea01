//
// Created by Key Cortés on 25/4/2022.
//

#ifndef LAB04_DATAFLOW_ALPHAK03_TXTFILE_H
#define LAB04_DATAFLOW_ALPHAK03_TXTFILE_H
#include "ITextProcess.h"
#include "Person.h"
#include "vector"
#include "List.h"

class TxtFile : public ITextProcess{
public:
    TxtFile();

    List dataReadingProcess(string) override;
    void dataWritingProcess(string, List) override;

    ~TxtFile() override;
};


#endif //LAB04_DATAFLOW_ALPHAK03_TXTFILE_H
