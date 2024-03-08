//
//  CompCourse.cpp
//  Cplusplus
//
//  Created by Vikas Saini on 2024-03-06.
//

#include "CompCourse.hpp"



CompCourse::CompCourse(string course_code, int level, const string& description, float credit, Program *ap, CompCourse *pre): Course(course_code, level, description, credit){
    this->pre_requisite = pre;
    this->associate_program = ap;
}


CompCourse::~CompCourse(){
    delete this->pre_requisite;
    delete this->associate_program;
}


void CompCourse::enroll(Student *s){
    
}

bool CompCourse::can_enroll(Student *s){
    return true;
}

void CompCourse::print(){
    cout << format("Course: {}, Level: {}, Description: {}\n", this->course_code, this->level, this->description);

}
