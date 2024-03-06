//
//  Student.cpp
//  Cplusplus
//
//  Created by Vikas Saini on 2024-03-02.
//

#include "Student.hpp"
#include "Program.hpp"



Student::Student(string name, short age, string id, Program* p){
    this->name = name;
    this->age = age;
    this->GPA = 0.0f;
    this->student_id = id;
    this->my_courses = new set<Course *>;
    this->my_program = p;
}


Student::~Student(){
    delete this->my_program;
    delete this->my_courses;
}


string Student::get_name(){
    return this->name;
}
string Student::get_student_id(){
    return this->student_id;
}
float Student::get_gpa(){
    return this->GPA;
}
short Student::get_age(){
    return this->age;
}
Program* Student::get_program(){
    return this->my_program;
}
set<Course *>* Student::get_courses(){
    return this->my_courses;
}
void Student::set_gpa(float g){
    this->GPA = g;
}
void Student::set_age(int age){
    this->age = age;
}
void Student::set_program(Program *p){
    this->my_program = p;
}
void Student::add_courses(Course *c){
    this->my_courses->insert(c);
}


void Student::print(){
    
}
