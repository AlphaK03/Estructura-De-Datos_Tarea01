//
// Created by Key Cortés on 25/4/2022.
//

#ifndef LAB04_DATAFLOW_ALPHAK03_PERSON_H
#define LAB04_DATAFLOW_ALPHAK03_PERSON_H
#include "iostream"
#include "sstream"

using namespace std;

class Person {
private:
    string id;
    string Name;
    string surname;
    string lastSurname;
    string birthday;
    int salary{};

public:
    Person();

    Person(string id, string name, string surname, string lastSurname,
           string birthday, int salary);

    const string &getId() const;

    void setId(const string &id);

    const string &getName() const;

    void setName(const string &name);

    const string &getSurname() const;

    void setSurname(const string &surname);

    const string &getLastSurname() const;

    void setLastSurname(const string &lastSurname);

    const string &getBirthday() const;

    void setBirthday(const string &birthday);

    int getSalary() const;

    void setSalary(int salary);

    friend ostream &operator<<(ostream &os, const Person &person);

    virtual ~Person();

    string toString();
};
#endif //LAB04_DATAFLOW_ALPHAK03_PERSON_H