#include <iostream>
#include <map>
#include <string>
#include "../headers/student.h"
using std::endl;

int Student::m_ID = 0;

//* Empty constructor
Student::Student() {
    m_ID++;
}
//* Parametrized constructor | fills name(required), grade(default = 50), age(default = 16)
Student::Student(std::string arg_name, int arg_age=16){
    m_ID++;
    name = arg_name;
    age = arg_age;
    
}
int Student::getID(){
    return m_ID;
}

void Student::setSubjects(std::string arg_name, float arg_garde){
    subjects[arg_name] = arg_garde;
}

void Student::setSubjects(std::string arg_name){
    subjects[arg_name];
}

void Student::getSubjects(){
    std::cout << "Your grades:-" << endl;
    for(const auto& [key, value] : subjects){
        std::cout << key << ": " << value << '%' << endl;
        grades_total+=value;
    }
    std::cout << "Total: " << grades_total << '%' << endl;
}

//* print & get all the values
void Student::getAll(){ 
    std::cout << "\nStudent ID: " << m_ID << endl << 
    "Student name: " << name << endl << 
    "Student Age: " << age << endl << endl;
    std::cout << "Your grades:-" << endl;

    //outputs the keys and values of subjects (subject's name, and grade)
    for(const auto& [key, value] : subjects){
        std::cout << key << ": " << value << '%' << endl;
        grades_total += value;
    }
    std::cout << "Total: " << grades_total << '%' << endl;
}

void Student::setAll() {
    std::cout << "Enter the student name: ";
    std::cin >> name;
    std::cout << "Enter the student age: ";
    std::cin >> age;
}