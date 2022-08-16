//
// Created by Key Cortés on 14/8/2022.
//

#include <sstream>
#include "TxtFile.h"
#include "Utility.h"

TxtFile::TxtFile() = default;

List TxtFile::dataReadingProcess(string filename) {
    List userList;
    string keyLine;
    char delimiter = '\t';
    int salary;
    string id, name, surname, lastSurname, birthday, salaryString;

    ifstream file(filename);
   // file.exceptions(std::ifstream::failbit | std::ifstream::badbit);
  if(file.fail()){
        throw runtime_error("Could not open the file [" + filename + "]");
    }

    while (getline(file, keyLine)) {
        stringstream stream(keyLine);
        getline(stream, id, delimiter);
        getline(stream, surname, delimiter);
        getline(stream, lastSurname, delimiter);
        getline(stream, name, delimiter);
        getline(stream, birthday, delimiter);
        getline(stream, salaryString, delimiter);
        salary = stoi(salaryString);
        auto* person = new Person(id, name,surname,lastSurname, birthday, salary);
        userList.pushBack(person);
    }
    file.close();

    return userList;
}

void TxtFile::dataWritingProcess(string filename, List userList) {

    Node * recorrido = userList.getHeadNode();
    ofstream file(filename,ofstream::out);
    while (recorrido!= nullptr){
            file << recorrido->person->getId() << "\t";
            file << recorrido->person->getSurname() << "\t";
            file << recorrido->person->getLastSurname() << "\t";
            file << recorrido->person->getName() << "\t";
            file << recorrido->person->getSalary() << endl;
            recorrido = recorrido->rightNode;
    }
    file.close();
}

TxtFile::~TxtFile() = default;
