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
    this->is_graduated = false;
    this->current_major_credit = 0.0f;
    this->current_elective_credit = 0.0f;
    this->my_courses = new set<Course *>;
    this->my_program = p;
}


Student::~Student(){
    delete this->my_program;
    delete this->my_courses;
}

void Student::eligible_to_graduate(){
    if (this->get_major_credit() >= this->my_program->get_major_credit() && this->get_elective_credit() >= this->my_program->get_elective_credit() && !this->is_graduated){
        this->is_graduated = true;
        cout << "\t\tEligible to graduate from " << this->my_program->get_program_name() << ". Credit Completed: " << this->get_elective_credit() + this->get_major_credit() << endl;
    }else{
        cout << "\t\tNOT eligible to graduate." <<
         " Major Credit needed: " << this->my_program->get_major_credit() - this->current_major_credit <<
         ", Elective Credit needed: " << this->my_program->get_elective_credit() - this->current_elective_credit << endl;
    }
}

void Student::update_major_credit(float cre){
    this->current_major_credit += cre;
}

void Student::update_elective_credit(float cre){
    this->current_elective_credit += cre;
}

float Student::get_major_credit(){
    return this->current_major_credit;
}

float Student::get_elective_credit(){
    return this->current_elective_credit;
}

float Student::get_total_credit(){
    return this->current_major_credit + this->current_elective_credit;
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
    cout << format("\n\tName: {}, Age: {}, Program: {}, GPA: {:0.2f}\n", this->name, this->age, this->my_program->get_program_name(), this->GPA);
    this->eligible_to_graduate();
    cout << "\t\t\tEnrolled Courses: " << this->get_courses()->size() << endl;
    for (const auto& course: *this->my_courses){
        course->print();
    }
}
