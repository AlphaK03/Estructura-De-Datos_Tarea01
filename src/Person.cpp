//
// Created by Key Cortés on 14/8/2022.
//

#include "Person.h"
#include "Utility.h"
#include "List.h"
#include <utility>


Person::Person() = default;

Person::Person(string id, string name, string surname, string lastSurname,
               string birthday, int salary) : id(std::move(id)), Name(std::move(name)), surname(std::move(surname)), lastSurname(std::move(lastSurname)),
                                              birthday(std::move(birthday)), salary(salary) {}


const string &Person::getId() const {
    return id;
}

void Person::setId(const string &id) {
    Person::id = id;
}

const string &Person::getName() const {
    return Name;
}

void Person::setName(const string &name) {
    Name = name;
}

const string &Person::getSurname() const {
    return surname;
}

void Person::setSurname(const string &surname) {
    Person::surname = surname;
}

const string &Person::getLastSurname() const {
    return lastSurname;
}

void Person::setLastSurname(const string &lastSurname) {
    Person::lastSurname = lastSurname;
}

const string &Person::getBirthday() const {
    return birthday;
}

void Person::setBirthday(const string &birthday) {
    Person::birthday = birthday;
}

int Person::getSalary() const {
    return salary;
}

void Person::setSalary(int salary) {
    Person::salary = salary;
}

string Person::toString() {
    stringstream ss;
    ss << (*this);
    return ss.str();
}

ostream &operator<<(ostream &os, const Person &person) {
    os << "id: " << person.id << " Name: " << person.Name << " surname: " << person.surname << " lastSurname: "
       << person.lastSurname << " birthday: " << person.birthday << " salary: " << person.salary;
    return os;
}

Person::~Person() = default;
