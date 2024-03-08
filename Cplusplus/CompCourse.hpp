//
//  CompCourse.hpp
//  Cplusplus
//
//  Created by Vikas Saini on 2024-03-06.
//

#ifndef CompCourse_hpp
#define CompCourse_hpp

#include "Course.hpp"
#include <iostream>
#include <format>

using namespace std;

class CompCourse : public Course {
public:
    CompCourse();
    CompCourse(string course_code, int level, const string& description, float credit, Program *ap, CompCourse *pre );
    ~CompCourse();
    virtual bool can_enroll(Student *s);
    virtual void enroll(Student *s);
    virtual void print();
private:
    Program *associate_program;
    CompCourse *pre_requisite;

};

#endif /* CompCourse_hpp */
