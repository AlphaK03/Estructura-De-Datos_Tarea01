//
// Created by keylo on 14/8/2022.
//

#include "List.h"
#include "Utility.h"

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

void List::sortListByName() {

}

float List::deductionAverage() {
    float average = 0.0;
    Node* traverse = headNode;

    while (traverse!=nullptr)
    {
        average += static_cast<float>((Utility::deduction(traverse->person->getSalary())));
        traverse=traverse->rightNode;
    }
    return average/static_cast<float>(size());
}

float List::netSalary() {
    float average = 0.0;
    Node* traverse = headNode;

    while (traverse!=nullptr)
    {
        average += static_cast<float>((traverse->person->getSalary() - Utility::deduction(traverse->person->getSalary())));
        traverse=traverse->rightNode;
    }
    return average/static_cast<float>(size());
}

string List::report() {
    stringstream  os;

    Node* traverse = headNode;

    while (traverse!=nullptr)
    {
        os << "| " << traverse->person->getId() << "\t| ";
        os << traverse->person->getSurname() << " ";
        os << traverse->person->getLastSurname() << "\t| ";
        os << traverse->person->getName() << " |\t";
        os << traverse->person->getSalary() << " |\t";
        os << Utility::deduction(traverse->person->getSalary()) << " |\t";
        os << fixed << setprecision(0) << (traverse->person->getSalary() - Utility::deduction(traverse->person->getSalary()));
        if((traverse->person->getSalary() - Utility::deduction(traverse->person->getSalary())) <= netSalary()){
            os << "  | * |\n";
        } else{
            os << "\n";
        }
        traverse=traverse->rightNode;
    }
    os << fixed << setprecision(2) << "\t\t\t\t\t| " << averageSalary() << "\t";
    os << fixed << setprecision(2) << "\t| " << deductionAverage() << "\t";
    os << fixed << setprecision(2) << "\t| " << netSalary() << "\t";
   

    return os.str();
}

float List::averageSalary() {
    float average = 0.0;
    Node* traverse = headNode;

    while (traverse!=nullptr)
    {
        average += static_cast<float>((traverse->person->getSalary()));
        traverse=traverse->rightNode;
    }
    return average/static_cast<float>(size());
}



