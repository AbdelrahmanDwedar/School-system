#include "../headers/teacher.h"
#include <string>
#include <iostream>
using std::endl;

//* Empty constructor
Teacher::Teacher() {
    m_ID++;
}

//* Parametrized constructor | fills name(required), subject(required), age(default = 30)
Teacher::Teacher(std::string arg_name, std::string arg_subject, int arg_age=30) { 
    m_ID++;
    name = arg_name;
    age = arg_age;
    m_subject = arg_subject;
}

void Teacher::setSubject(std::string arg_subject) {
    m_subject = arg_subject;
}

std::string Teacher::getSubject() {
    return m_subject;
}

//* print all the values
void Teacher::getAll() {
    std::cout << "\nTeacher ID: " << m_ID << endl << 
    "Teacher name: " << name << endl << 
    "Teacher Age: " << age << endl <<
    "Teacher subject: " << m_subject << endl;
}

//* input all the values of Teacher
void Teacher::setAll() {
    std::cout << "Enter the teacher name: ";
    std::cin >> name;
    std::cout << "Enter the teacher age: ";
    std::cin >> age;
    std::cout << "Enter the teacher subject: ";
    std::cin >> m_subject;
}

int Teacher::m_ID = 0; // sets the first difult 