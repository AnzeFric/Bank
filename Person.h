//
// Created by anzef on 23. 03. 2023.
//

#ifndef NALOGA0502_PERSON_H
#define NALOGA0502_PERSON_H


#include <string>

class Person {
private:
    std::string firstName, lastName;
public:
    Person(const std::string& firstName, const std::string& lastName);
    std::string toString() const;
};


#endif //NALOGA0502_PERSON_H
