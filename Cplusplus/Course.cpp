//
//  Course.cpp
//  Cplusplus
//
//  Created by Vikas Saini on 2024-03-02.
//

#include "Course.hpp"



Course::Course(string course_code, int level, const string& description, float credit): course_code(course_code), level(level), credit(credit){
    this->description = description;
    this->grade = 0.0f;
    this->enrolled_students = new set<Student *>;
}

Course::~Course(){

}

// this copy constructor will perform deep copy of course
Course::Course(const Course* c): course_code(c->course_code), level(c->level), credit(c->credit){
    this->description = c->description;
    this->grade = c->grade;
    this->enrolled_students = new set<Student *>;
    for (const auto& stu : *(c->enrolled_students)){
        this->enrolled_students->insert(new Student(* stu));
    }
}

float Course::get_credit(){
    return this->credit;
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
