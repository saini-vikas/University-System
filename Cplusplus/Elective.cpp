//
//  Elective.cpp
//  Cplusplus
//
//  Created by Vikas Saini on 2024-03-06.
//

#include "Elective.hpp"


Elective::Elective(string course_code, int level, const string& description, float credit): Course(course_code, level, description, credit){
    
}

Elective::~Elective(){
    
}


bool Elective::can_enroll(Student *s){
    return true;
}
void Elective::enroll(Student *s){
    
}
void Elective::print(){
    
}

