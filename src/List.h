//
// Created by Key Cortés on 14/8/2022.
//
#include "Node.h"
#include "sstream"
#include "iomanip"

#ifndef LAB04_DATAFLOW_ALPHAK03_LIST_H
#define LAB04_DATAFLOW_ALPHAK03_LIST_H

class List {
private:
    Node * headNode{};
    Node * endNode{};

public:
    List();
    List(Node *headNode, Node *endNode);
    virtual ~List();

    Node *getHeadNode() const;

    void setHeadNode(Node *headNode);

    Node *getEndNode() const;

    void setEndNode(Node *endNode);

    void pushBack(Person*);
    string showFromStartToEnd();
    void sortList();
    void sortListLastSurname();
    void sortListByName();
    int size();
    float deductionAverage();
    float netSalary();
    float averageSalary();

    string report();


};


#endif //LAB04_DATAFLOW_ALPHAK03_LIST_H
