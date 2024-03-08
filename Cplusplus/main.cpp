//
//  main.cpp
//  Cplusplus
//
//  Created by Vikas Saini on 2024-03-02.
//

#include <iostream>

#include "University.hpp"
#include "Program.hpp"
#include "Student.hpp"
#include "CompCourse.hpp"


int main(int argc, const char * argv[]) {
    University *car = new University("Carleton University", "1125 Collnell Drive, Ottawa, ON");
    Program *computer_science = new Program("Computer Science", "COMP");
    Program *health_science = new Program("Health Science", "HLTH");
    Program *earth_science = new Program("Earth Science", "ERTH");
    Student *s1 = new Student("Vikas Saini", 22, "101169794", computer_science);
    Student *s2 = new Student("AmritPal Singh", 25, "101169795", computer_science);
    Student *s3 = new Student("Gurnoor Judge", 21, "101169796", computer_science);
    Student *s4 = new Student("Jainam Shah", 23, "101169797", computer_science);
    Student *s5 = new Student("Gaurav Saini", 19, "101169798", health_science);
    Student *s6 = new Student("Sundar Pichai", 42, "101169799", computer_science);
    Student *s7 = new Student("Sam Altman", 39, "101169791", computer_science);
    Student *s8 = new Student("Elon Musk", 52, "101169792", earth_science);
    Student *s9 = new Student("Dhruv Rathee", 29, "101169793", health_science);
    Student *s10 = new Student("Ranbir Kapoor", 37, "101169800", earth_science);
    CompCourse *comp1405 = new CompCourse("Comp1405", 1, "Intro to Computer Science 1", 0.5, computer_science, NULL);
    car->add_program(computer_science);
    car->add_program(health_science);
    car->add_program(earth_science);
    car->admit_student(s1);
    car->admit_student(s2);
    car->admit_student(s3);
    car->admit_student(s4);
    car->admit_student(s5);
    car->admit_student(s6);
    car->admit_student(s7);
    car->admit_student(s8);
    car->admit_student(s9);
    car->admit_student(s10);
    car->print();
    comp1405->print();
    
    return 0;
}
