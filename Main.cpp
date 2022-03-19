#include <iostream>
#include <map>
#include "headers/person.h"
// #include "headers/student.h"
#include "headers/teacher.h"
#include "headers/highschool.h"
using std::endl;

int main() {
    Student ob;
    ob.setAll();
    ob.setSubjects("English");
    ob.getAll();


    return 0; 
}
