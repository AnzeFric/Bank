//
// Created by anzef on 23. 03. 2023.
//

#include "Person.h"

Person::Person(const std::string &firstName, const std::string &lastName) : firstName(firstName), lastName(lastName){}

std::string Person::toString() const{
    return firstName + " " + lastName;
}
