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



class CompCourse : public Course {
public:
    CompCourse();
    CompCourse(string course_code, int level, const string& description, float credit, CompCourse *pre, Program *ap);
    ~CompCourse();
    bool can_enroll(Student *s);
    void enroll(Student *s);
    void print();
private:
    Program *associate_program;
    CompCourse *pre_requisite;
    
};

#endif /* CompCourse_hpp */
