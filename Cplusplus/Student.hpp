//
//  Student.hpp
//  Cplusplus
//
//  Created by Vikas Saini on 2024-03-02.
//

#ifndef Student_hpp
#define Student_hpp

#include <iostream>
#include <set>
#include <string>
#include <format>



using namespace std;

class Program;
class Course;

class Student {
public:
    Student();
    Student(string name, short age, string id, Program* p);
    ~Student();
    string get_name();
    string get_student_id();
    float get_gpa();
    short get_age();
    Program* get_program();
    set<Course *>* get_courses();
    void set_gpa(float g);
    void set_age(int age);
    void update_major_credit(float cre);
    void update_elective_credit(float cre);
    float get_total_credit();
    void set_program(Program *p);
    void add_courses(Course *c);
    void eligible_to_graduate();
    float get_major_credit();
    float get_elective_credit();
    void print();
    
private:
    string name;
    short age;
    string student_id;
    float GPA;
    bool is_graduated;
    float current_major_credit;
    float current_elective_credit;
    Program *my_program;
    set<Course *> *my_courses;
   
};

#endif /* Student_hpp */
