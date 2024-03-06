//
//  main.cpp
//  Cplusplus
//
//  Created by Vikas Saini on 2024-03-02.
//

#include <iostream>

#include "University.hpp"


int main(int argc, const char * argv[]) {
    University *car = new University("Carleton University", "1125 Collnell Drive, Ottawa, ON");
    car->print();
    
    return 0;
}
