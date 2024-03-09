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
#include "HlthCourse.hpp"
#include "ErthCourse.hpp"
#include "Elective.hpp"


int main(int argc, const char * argv[]) {
    University *car = new University("Carleton University", "1125 Collnell Drive, Ottawa, ON");
    // University Programs
    Program *computer_science = new Program("Bachelor of Computer Science", "COMP");
    Program *health_science = new Program("Bachelor of Health Science", "HLTH");
    Program *earth_science = new Program("Bachelor of Earth Science", "ERTH");
    // Students
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
    // Computer Science Courses
    CompCourse *comp1405 = new CompCourse("COMP1405", 1, "Intro to Computer Science I", 1.0, computer_science, NULL);
    CompCourse *comp1406 = new CompCourse("COMP1406", 1, "Intro to Computer Science II", 1.0, computer_science, NULL);
    CompCourse *comp1805 = new CompCourse("COMP1805", 1, "Discrete Structure I", 1.0, computer_science, NULL);
    CompCourse *comp2401 = new CompCourse("COMP2401", 2, "Intro to Computer Programming", 1.0, computer_science, NULL);
    CompCourse *comp2404 = new CompCourse("COMP2404", 2, "Object Oriented Programming", 1.0, computer_science, comp2401);
    CompCourse *comp3000 = new CompCourse("COMP3000", 3, "Operating Systems", 1.0, computer_science, comp2401);
    CompCourse *comp3004 = new CompCourse("COMP3004", 3, "Intro to Software Engineering", 1.0, computer_science, comp3000);
    CompCourse *comp3008 = new CompCourse("COMP3008", 3, "Human Computer Interations", 1.0, computer_science, NULL);
    CompCourse *comp2804 = new CompCourse("COMP2804", 2, "Discrete Structure II", 1.0, computer_science, comp1805);
    CompCourse *comp2402 = new CompCourse("COMP2402", 2, "Intro to Data Structure", 1.0, computer_science, comp2401);
    CompCourse *comp2406 = new CompCourse("COMP2406", 2, "Intro to Web Development", 1.0, computer_science, comp2401);
    CompCourse *comp3804 = new CompCourse("COMP3804", 3, "Intro to Algorithms", 1.0, computer_science, comp2804);
    CompCourse *comp4107 = new CompCourse("COMP4107", 4, "Neural Networks", 1.0, computer_science, comp3804);
    // Earth Science Courses
    ErthCourse *erth1006 = new ErthCourse("ERTH1006", 1, "Exploring Planet Earth", 1.0, earth_science, NULL);
    ErthCourse *erth1009 = new ErthCourse("ERTH1009", 1, "The Earth System Through Time", 1.0, earth_science, NULL);
    ErthCourse *erth2102 = new ErthCourse("ERTH2102", 2, "Mineralogy to Petrology", 1.0, earth_science, erth1006);
    ErthCourse *erth2104 = new ErthCourse("ERTH2104", 2, "Igneous Systems, Geochemistry and Processes", 1.0, earth_science, erth2102);
    ErthCourse *erth2105 = new ErthCourse("ERTH2105", 2, "Geodynamics", 1.0, earth_science, erth2102);
    ErthCourse *erth2406 = new ErthCourse("ERTH2406", 2, "Geology and Map Interpretation", 1.0, earth_science, erth2102);
    ErthCourse *erth3003 = new ErthCourse("ERTH3003", 3, "Sedimentology", 1.0, earth_science, erth2104);
    ErthCourse *erth3203 = new ErthCourse("ERTH3203", 3, "Geochemistry and Geochronology", 1.0, earth_science, erth2104);
    ErthCourse *erth3205 = new ErthCourse("ERTH3205", 3, "Physical Hydrogeology", 1.0, earth_science, erth2105);
    ErthCourse *erth3406 = new ErthCourse("ELTH3406", 3, "Geophysical Methods", 1.0, earth_science, erth2406);
    // Health Science Courses
    HlthCourse *hlth1000 = new HlthCourse("HLTH1000", 1, "Fundamentals of Health", 1.0, health_science, NULL);
    HlthCourse *hlth1002 = new HlthCourse("HLTH1002", 1, "Health Science Communication", 1.0, health_science, NULL);
    HlthCourse *hlth2001 = new HlthCourse("HLTH2001", 2, "Health Research Methods and Skills", 1.0, health_science, hlth1000);
    HlthCourse *hlth2002 = new HlthCourse("HLTH2002", 2, "Molecular and Cellular Pathology", 1.0, health_science, hlth1002);
    HlthCourse *hlth2003 = new HlthCourse("HLTH2003", 2, "Social Determinants of Health", 1.0, health_science, hlth1000);
    HlthCourse *hlth3101 = new HlthCourse("HLTH3101", 3, "Global Health", 1.0, health_science, hlth2001);
    HlthCourse *hlth3102 = new HlthCourse("HLTH3102", 3, "Epidemiology", 1.0, health_science, hlth2002);
    HlthCourse *hlth3103 = new HlthCourse("HLTH3103", 3, "Immunity and Immune-Related Disorders", 1.0, health_science, hlth2003);
    HlthCourse *hlth3404 = new HlthCourse("HLTH3404", 3, "Psychosocial and Biological Interactions in Health", 1.0, health_science, hlth2002);
    HlthCourse *hlth3901 = new HlthCourse("HLTH3901", 3, "Emerging Issues in Health Sciences I", 1.0, health_science, hlth2001);
    HlthCourse *hlth3902 = new HlthCourse("HLTH3902", 3, "Emerging Issues in Health Sciences II", 1.0, health_science, hlth2002);
    HlthCourse *hlth3903 = new HlthCourse("HLTH3903", 3, "Emerging Issues in Health Sciences III", 1.0, health_science, hlth2003);
    // Free Elective
    Elective *math1009 = new Elective("MATH1009", 1, "Calculas I", 1.0);
    Elective *busi1800 = new Elective("BUSI1800", 1, "Intro to Business", 1.0);
    Elective *chem1002 = new Elective("CHEM1002", 1, "General Chemistry", 1.0);
    Elective *econ1001 = new Elective("ECON1001", 1, "Intro to Economics", 1.0);
    Elective *cgsc1001 = new Elective("CGSC1001", 1, "COgnitive Science", 1.0);
    Elective *film1100 = new Elective("FILM1009", 1, "Intro to Film Studies", 1.0);
    Elective *laws1001 = new Elective("LAWS1009", 1, "Intro to Legal Studies", 1.0);
    
    computer_science->add_course(comp1405);
    computer_science->add_course(comp1406);
    computer_science->add_course(comp1805);
    computer_science->add_course(comp2401);
    computer_science->add_course(comp2402);
    computer_science->add_course(comp2406);
    computer_science->add_course(comp2404);
    computer_science->add_course(comp3000);
    computer_science->add_course(comp3004);
    computer_science->add_course(comp3008);
    computer_science->add_course(comp2804);
    computer_science->add_course(comp3804);
    computer_science->add_course(math1009);
    computer_science->add_course(busi1800);
    computer_science->add_course(chem1002);
    computer_science->add_course(econ1001);
    computer_science->add_course(cgsc1001);
    computer_science->add_course(film1100);
    computer_science->add_course(laws1001);
    
    earth_science->add_course(erth1006);
    earth_science->add_course(erth1009);
    earth_science->add_course(erth2102);
    earth_science->add_course(erth2104);
    earth_science->add_course(erth2105);
    earth_science->add_course(erth2406);
    earth_science->add_course(erth3003);
    earth_science->add_course(erth3203);
    earth_science->add_course(erth3205);
    earth_science->add_course(erth3406);
    earth_science->add_course(math1009);
    earth_science->add_course(busi1800);
    earth_science->add_course(chem1002);
    earth_science->add_course(econ1001);
    earth_science->add_course(cgsc1001);
    earth_science->add_course(film1100);
    earth_science->add_course(laws1001);
    
    health_science->add_course(hlth1000);
    health_science->add_course(hlth1002);
    health_science->add_course(hlth2001);
    health_science->add_course(hlth2002);
    health_science->add_course(hlth2003);
    health_science->add_course(hlth3101);
    health_science->add_course(hlth3102);
    health_science->add_course(hlth3103);
    health_science->add_course(hlth3404);
    health_science->add_course(hlth3901);
    health_science->add_course(hlth3902);
    health_science->add_course(hlth3903);
    health_science->add_course(math1009);
    health_science->add_course(busi1800);
    health_science->add_course(chem1002);
    health_science->add_course(econ1001);
    health_science->add_course(cgsc1001);
    health_science->add_course(film1100);
    health_science->add_course(laws1001);
  
    
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
