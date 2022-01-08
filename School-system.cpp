#include <iostream>
#include <map>
using std::endl;

//! person base class | name, age
class Person{
    protected:
        std::string name;
        int age;
    public:
        void setName(std::string arg_name){
            name = arg_name;
        }
        void setAge(int arg_age){
            age = arg_age;
        }
        std::string getName(){
            return name;
        }
        int getAge(){
            return age;
        }
};

//! driven teather class | ID, subject
class Teacher : private Person{
    std::string m_subject;
    static int m_ID;
    public:
        //* Empty constructor
        Teacher(){
            m_ID++;
        }
        //* Parametrized constructor | fills name(required), subject(required), age(default = 30)
        Teacher(std::string arg_name, std::string arg_subject, int arg_age=30){ 
            m_ID++;
            name = arg_name;
            age = arg_age;
            m_subject = arg_subject;
        }
        void setSubject(std::string arg_subject){
            m_subject = arg_subject;
        }
        std::string getSubject(){
            return m_subject;
        }
        //* print all the values
        void getAll(){
            std::cout << "\nTeacher ID: " << m_ID << endl << 
            "Teacher name: " << name << endl << 
            "Teacher Age: " << age << endl <<
            "Teacher subject: " << m_subject << endl;
        }
        //* input all the values of Teacher
        void setAll() {
            std::cout << "Enter the teacher name: ";
            std::cin >> name;
            std::cout << "Enter the teacher age: ";
            std::cin >> age;
            std::cout << "Enter the teacher subject: ";
            std::cin >> m_subject;
        }
}; int Teacher::m_ID = 0; // sets the first difult 


//! driven student class | ID, grade(grades)
class Student : public Person{
    protected:
        std::map<std::string, float> subjects;
        static int m_ID;
        float grades_total = 012;
    public:
        //* Empty constructor
        Student() {
            m_ID++;
        }
        //* Parametrized constructor | fills name(required), grade(default = 50), age(default = 16)
        Student(std::string arg_name, int arg_age=16){
            m_ID++;
            name = arg_name;
            age = arg_age;
            
        }
        int getID(){
            return m_ID;
        }
        void setSubjects(std::string arg_name, float arg_garde){
            subjects[arg_name] = arg_garde;
        }
        void setSubjects(std::string arg_name){
            subjects[arg_name];
        }
        void getSubjects(){
            std::cout << "Your grades:-" << endl;
            for(const auto& [key, value] : subjects){
                std::cout << key << ": " << value << '%' << endl;
                grades_total+=value;
            }
            std::cout << "Total: " << grades_total << '%' << endl;
        }
        //* print & get all the values
        void getAll(){ 
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
        void setAll() {
            std::cout << "Enter the student name: ";
            std::cin >> name;
            std::cout << "Enter the student age: ";
            std::cin >> age;
        }
}; int Student::m_ID = 0;

class High_school : public Student {    
    public:
        High_school(){}
        High_school(std::string arg_name, int arg_age=16){
            name = arg_name;
            age = arg_age;
        }
};

class Middle_School : public Student {};

class Primary_school : public Student {};


int main(){
    High_school obj;
    obj.setSubjects("Math", 100);
    obj.setSubjects("Biology", 86);
    obj.getAll();

    Student ob;
    ob.setAll();
    ob.setSubjects("English");
    ob.getAll();


return 0; }

