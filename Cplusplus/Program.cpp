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
    this->credit_needed = 10;
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


void Program::set_capacity(int n){
    this->capacity = n;
}


void Program::add_student(Student *s){
    
}

void Program::print(){
    cout << "\tProgram: " << this->name << ", Code: " << this->program_code << ", Capacity: " << this->capacity << endl;
    
}
