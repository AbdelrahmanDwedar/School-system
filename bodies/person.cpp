#include "../headers/person.h"
#include <string>

void Person::setName(std::string arg_name) {
    name = arg_name;
}

void Person::setAge(int arg_age) {
    age = arg_age;
}

std::string Person::getName() {
    return name;
}

int Person::getAge() {
    return age;
}