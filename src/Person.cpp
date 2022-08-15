//
// Created by Key Cortés on 25/4/2022.
//

#include "Person.h"

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

ostream &operator<<(ostream &os, const Person &person) {
        os << "| " << person.id << " | " << person.surname << " " << person.lastSurname << "            | " << person.Name << " |\t" << person.salary << " |\t72,000.00 |\t28,000.00 | * |\n";
    return os;
}

string Person::toString() {
    stringstream ss;
    ss << (*this);
    return ss.str();
}

Person::~Person() = default;
