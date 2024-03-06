//
//  University.cpp
//  Cplusplus
//
//  Created by Vikas Saini on 2024-03-02.
//

#include "University.hpp"



University::University(string name, string address){
    this->name = name;
    this->address = address;
    this->all_programs = new set<Program *>;
    this->all_students = new set<Student *>;
}
University::~University(){
    delete all_programs;
    delete all_students;
}
string University::get_name(){
    return this->name;
}
string University::get_address(){
    return this->address;
}
set<Program *> * University::get_programs(){
    return this->all_programs;
}
set<Student *> * University::get_Student(){
    return this->all_students;
}
void University::add_program(Program* p){
    this->all_programs->insert(p);
}
void University::admit_student(Student* stu){
    this->all_students->insert(stu);
}
void University::print(){
    std::cout << "University name: " << this->name << " Address: " <<this->address << endl;
}
