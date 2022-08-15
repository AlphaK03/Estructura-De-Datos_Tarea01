//
// Created by keylo on 14/8/2022.
//

#include "List.h"

List::List() = default;

List::List(Node *headNode, Node *endNode) : headNode(headNode), endNode(endNode) {}

List::~List() = default;

void List::pushBack(Person * person) {
    auto * newNode = new Node();
    newNode->person = person;
    if (headNode == nullptr) {
        headNode = newNode;
        endNode = newNode;
        newNode->rightNode = nullptr;
    }
    else {
        endNode->rightNode = newNode;
        endNode = endNode->rightNode;
        //endNode = newNode
        endNode->rightNode = nullptr;
    }
}

string List::showFromStartToEnd() {
    stringstream ss;
    Node* traverse = headNode;
    while (traverse!=nullptr)
    {
        ss << traverse->person->toString() << endl;
        traverse=traverse->rightNode;
    }
    return ss.str();
}

void List::sortList() {
    auto primero = headNode;
    auto segundo = new Node();
    auto aux = new Person();

    while (primero != endNode){
        segundo = primero->rightNode;
        while (segundo != nullptr){

            if(primero->person->getSurname() > segundo->person->getSurname()){
            aux = primero->person;
            primero->person = segundo->person;
            segundo->person = aux;
            sortListLastSurname();
            }
            segundo = segundo->rightNode;
        }
        primero = primero->rightNode;
    }

}

int List::size() {
    int listSize = 0;
    Node* traverse = headNode;

    while (traverse!=nullptr)
    {
        traverse=traverse->rightNode;
        listSize++;
    }
    return listSize;
}

void List::sortListLastSurname() {
    auto primero = headNode;
    auto segundo = new Node();
    auto aux = new Person();

    while (primero != endNode){
        segundo = primero->rightNode;
        while (segundo != nullptr){

            if(primero->person->getSurname() == segundo->person->getSurname()){
                if(primero->person->getLastSurname() > segundo->person->getLastSurname()){
                    aux = primero->person;
                    primero->person = segundo->person;
                    segundo->person = aux;
                }
            }
            segundo = segundo->rightNode;
        }
        primero = primero->rightNode;
    }

}

Node *List::getHeadNode() const {
    return headNode;
}

void List::setHeadNode(Node *headNode) {
    List::headNode = headNode;
}

Node *List::getEndNode() const {
    return endNode;
}

void List::setEndNode(Node *endNode) {
    List::endNode = endNode;
}



