//
//  Course.hpp
//  Cplusplus
//
//  Created by Vikas Saini on 2024-03-02.
//

#ifndef Course_hpp
#define Course_hpp

#include <iostream>
#include <set>
#include <string>
#include "Student.hpp"

using namespace std;


class Course {
public:
    Course();
    Course(string course_code, int level, const string& description, float credit);
    ~Course();
    Course(const Course* c);
    void set_grade(float g);
    void set_description(const string& des);
    string get_course_code();
    string& get_description();
    float get_grade();
    float get_credit();
    int get_level();
    virtual bool can_enroll(Student *s) = 0;
    virtual void enroll(Student *s) = 0;
    virtual void print() = 0;
protected:
    const string course_code;
    const int level;
    float grade;
    const float credit;
    string description;
    set<Student *> *enrolled_students;
    
};

#endif /* Course_hpp */
