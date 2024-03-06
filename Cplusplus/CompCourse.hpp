//
//  CompCourse.hpp
//  Cplusplus
//
//  Created by Vikas Saini on 2024-03-06.
//

#ifndef CompCourse_hpp
#define CompCourse_hpp


#include <iostream>
#include "Course.hpp"
#include "Student.hpp"

class CompCourse : public Course {
public:
    CompCourse();
    ~CompCourse();
    void enroll(Student *s);
    void print();
private:
    
};

#endif /* CompCourse_hpp */
