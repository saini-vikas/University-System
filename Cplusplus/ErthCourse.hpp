//
//  ErthCourse.hpp
//  Cplusplus
//
//  Created by Vikas Saini on 2024-03-06.
//

#ifndef ErthCourse_hpp
#define ErthCourse_hpp

#include "Course.hpp"
#include <iostream>
#include <format>


using namespace std;


class ErthCourse : public Course {
public:
    ErthCourse();
    ErthCourse(string course_code, int level, const string& description, float credit, Program *p, ErthCourse *pre);
    ~ErthCourse();
    virtual bool can_enroll(Student *s);
    virtual void enroll(Student *s);
    virtual void print();
    
private:
    Program *associate_program;
    ErthCourse *pre_requisite;
    
};

#endif /* ErthCourse_hpp */
