#ifndef PRIMARY_SCHOOL_H
#define PRIMARY_SCHOOL_H
#include "student.h"

class PrimarySchool : public Student {
    public:
        PrimarySchool();
        PrimarySchool(std::string arg_name, int arg_age=6);
};

#endif
