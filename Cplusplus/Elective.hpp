//
//  Elective.hpp
//  Cplusplus
//
//  Created by Vikas Saini on 2024-03-06.
//

#ifndef Elective_hpp
#define Elective_hpp
#include "Course.hpp"

#include <iostream>


class Elective : public Course {
public:
    Elective();
    Elective(string course_code, int level, const string& description, float credit);
    ~Elective();
    virtual bool can_enroll(Student *s);
    virtual void enroll(Student *s);
    virtual void print();
    
    
private:
    
    
    
};

#endif /* Elective_hpp */
