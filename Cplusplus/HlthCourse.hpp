//
//  HlthCourse.hpp
//  Cplusplus
//
//  Created by Vikas Saini on 2024-03-06.
//

#ifndef HlthCourse_hpp
#define HlthCourse_hpp

#include <iostream>
#include "Course.hpp"
#include <format>

using namespace std;

class HlthCourse : public Course {
public:
    HlthCourse();
    HlthCourse(string course_code, int level, const string& description, float credit, Program *p, HlthCourse *pre);
    ~HlthCourse();
    virtual bool can_enroll(Student *s);
    virtual void enroll(Student *s);
    virtual void print();
    
private:
    Program *associate_program;
    HlthCourse *pre_requisite;
    
};


#endif /* HlthCourse_hpp */
