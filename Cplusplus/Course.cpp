//
//  Course.cpp
//  Cplusplus
//
//  Created by Vikas Saini on 2024-03-02.
//

#include "Course.hpp"
#include "Student.hpp"



Course::Course(string course_code, int level, const string& description): course_code(course_code), level(level){
    this->description = description;
    this->grade = 0.0f;
    this->enrolled_students = new set<Student *>;
}

// this copy constructor will perform deep copy of course
Course::Course(const Course* c): course_code(c->course_code), level(c->level){
    this->description = c->description;
    this->grade = c->grade;
    this->enrolled_students = new set<Student *>;
    for (const auto& stu : *(c->enrolled_students)){
        this->enrolled_students->insert(new Student(* stu));
    }
    
    
}
Course::~Course(){
    delete enrolled_students;
}

void Course::set_grade(float g){
    this->grade = g;
}

void Course::set_description(const string &des){
    this->description = des;
}

float Course::get_grade(){
    return this->grade;
}

string Course:: get_course_code(){
    return this->course_code;
}


string& Course::get_description(){
    return this->description;
}
