#ifndef PREP_SCHOOL_H
#define PREP_SCHOOL_H
#include "student.h"

class PrepSchool : public Student {
    public:
        PrepSchool();
        PrepSchool(std::string arg_name, int arg_age=7);
};

#endif
