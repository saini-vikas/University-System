//
//  University.hpp
//  Cplusplus
//
//  Created by Vikas Saini on 2024-03-02.
//

#ifndef University_hpp
#define University_hpp

#include <iostream>
#include <set>
#include "Program.hpp"
#include "Student.hpp"

using namespace std;

class University {
public:
    University();
    University(string name, string address);
    ~University();
    string get_name();
    string get_address();
    set<Program *> * get_programs();
    set<Student *> * get_Student();
    void add_program(Program* p);
    void admit_student(Student* stu);
    void print();
    
    
    
private:
    string name;
    string address;
    set<Program *> *all_programs;
    set<Student *> *all_students;
    
};

#endif /* University_hpp */
