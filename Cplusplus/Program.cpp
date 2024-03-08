//
//  Program.cpp
//  Cplusplus
//
//  Created by Vikas Saini on 2024-03-02.
//

#include "Program.hpp"


Program::Program(string name, string program_code):name(name), program_code(program_code){
    this->capacity = 25;
    this->students = new set<Student *>;
    this->total_credit_needed = 12;
    this->elective_credit = 4;
    this->major_credit = 8;
    this->mandatory_courses = new set<Course *>;
}



Program::~Program(){
    delete this->students;
}

int Program::get_capacity(){
    return this->capacity;
}


string Program::get_program_code(){
    return this->program_code;
}


string Program::get_program_name(){
    return this->name;
}

float Program::get_total_credit_needed(){
    return this->total_credit_needed;
}

float Program::get_major_credit(){
    return this->major_credit;
}

float Program::get_elective_credit(){
    return this->elective_credit;
}


void Program::set_capacity(int n){
    this->capacity = n;
}


void Program::add_student(Student *s){
    
}

void Program::print(){
    cout << "\tProgram: " << this->name << ", Code: " << this->program_code << ", Capacity: " << this->capacity << ", Credit Needed: " << this->total_credit_needed << endl;
    
}
