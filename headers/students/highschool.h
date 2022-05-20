#ifndef HIGHSCHOOL_H
#define HIGHSCHOOL_H
#include "student.h"

class Highschool : public Student {    
    public:
        Highschool();
        Highschool(std::string arg_name, int arg_age=16);
};

#endif
