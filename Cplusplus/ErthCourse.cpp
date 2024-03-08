//
//  ErthCourse.cpp
//  Cplusplus
//
//  Created by Vikas Saini on 2024-03-06.
//

#include "ErthCourse.hpp"



ErthCourse::ErthCourse(string course_code, int level, const string& description, float credit, Program *p, ErthCourse *pre): Course(course_code, level, description, credit){
    this->pre_requisite = pre;
    this->associate_program = p;
}
    
ErthCourse::~ErthCourse(){
    delete this->pre_requisite;
    delete this->associate_program;
}


bool ErthCourse::can_enroll(Student *s){
    return true;
}

void ErthCourse::enroll(Student *s){
    
}

void ErthCourse::print(){
    cout << format("Course: {}, Level: {}, Description: {}\n", this->course_code, this->level, this->description);
}
