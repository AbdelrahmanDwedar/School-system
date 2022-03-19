#ifndef TEACHER_H
#define TEACHER_H
#include "person.h"
#include <string>

//! driven teather class | ID, subject
class Teacher : private Person {
    std::string m_subject; 
    static int m_ID;
    public:
        //* Empty constructor
        Teacher();

        //* Parametrized constructor | fills name(required), subject(required), age(default = 30)
        Teacher(std::string arg_name, std::string arg_subject, int arg_age=30);

        void setSubject(std::string arg_subject);

        std::string getSubject();

        //* print all the values
        void getAll();

        //* input all the values of Teacher
        void setAll();
};

#endif