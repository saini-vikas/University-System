//
//  HlthCourse.cpp
//  Cplusplus
//
//  Created by Vikas Saini on 2024-03-06.
//

#include "HlthCourse.hpp"


HlthCourse::HlthCourse(string course_code, int level, const string& description, float credit, Program *ap, HlthCourse *pre): Course(course_code, level, description, credit){
    this->pre_requisite = pre;
    this->associate_program = ap;
}


HlthCourse::~HlthCourse(){
    delete this->pre_requisite;
    delete this->associate_program;
}


void HlthCourse::enroll(Student *s){
    
}

bool HlthCourse::can_enroll(Student *s){
    return true;
}

void HlthCourse::print(){
    cout << format("Course: {}, Level: {}, Description: {}\n", this->course_code, this->level, this->description);

}
