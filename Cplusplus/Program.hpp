//
//  Program.hpp
//  Cplusplus
//
//  Created by Vikas Saini on 2024-03-02.
//

#ifndef Program_hpp
#define Program_hpp

#include <iostream>
#include "Course.hpp"
#include <set>
#include <string>

using namespace std;
class Student;

class Program {
public:
    Program();
    Program(string name, string program_code);
    ~Program();
    int get_capacity();
    string get_program_name();
    string get_program_code();
    void set_capacity(int n);
    void add_student(Student *s);
    void print();
    
private:
    const string name;
    int capacity;
    const string program_code;
    float credit_needed;
    set<Course *> *mandatory_courses;
    set<Student *> *students;
};

#endif /* Program_hpp */
