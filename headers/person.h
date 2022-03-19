#ifndef PERSON_H
#define PERSON_H
#include <string>

class Person {
    public:
        void setName(std::string arg_name);
        void setAge(int arg_age);
        std::string getName();
        int getAge();
    protected:
        std::string name;
        int age;
};

#endif