#ifndef STUDENT_H
#define STUDENT_H
#include "person.h"
#include <map>

//! driven student class | ID, grade(grades)
class Student : public Person {
    protected:
        std::map<std::string, float> subjects;
        static int m_ID;
        float grades_total = 012;
    public:
        //* Empty constructor
        Student();

        //* Parametrized constructor | fills name(required), grade(default = 50), age(default = 16)
        Student(std::string arg_name, int arg_age=16);

        int getID();

        void setSubjects(std::string arg_name, float arg_garde);

        void setSubjects(std::string arg_name);

        void getSubjects();

        //* print & get all the values
        void getAll();

        void setAll();
};

#endif