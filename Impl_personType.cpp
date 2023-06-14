#include <iostream>
#include <string>
#ifndef personType_H
#define personType_H
#include "Interface_personType.h"

void personType::set_first_name(std::string firstName) {
    FirstName = firstName;
}

std::string personType::get_first_name() const {
    return FirstName;
}

void personType::set_secound_name(std::string secoundName) {
    SecoundName = secoundName;
}

std::string personType::get_secound_name() const {
    return SecoundName;
}

void personType::set_last_name(std::string lastName) {
    LastName = lastName;
}

std::string personType::get_last_name() const {
    return LastName;
} 

personType::personType() {
    FirstName = " ";
    SecoundName = " ";
    LastName = " ";
} 

personType::personType(std::string firstName, std::string secoundName, std::string lastName) {
    set_first_name(firstName);
    set_secound_name(secoundName);
    set_last_name(lastName);
}

#endif
