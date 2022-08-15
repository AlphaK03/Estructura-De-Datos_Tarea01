//
// Created by keylo on 14/8/2022.
//

#ifndef LAB04_DATAFLOW_ALPHAK03_NODE_H
#define LAB04_DATAFLOW_ALPHAK03_NODE_H
#include "Person.h"

class Node {
public:
    Person * person{};
    Node * rightNode{};

    Node();
    virtual ~Node();
};


#endif //LAB04_DATAFLOW_ALPHAK03_NODE_H
