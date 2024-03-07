//
//  ErthCourse.hpp
//  Cplusplus
//
//  Created by Vikas Saini on 2024-03-06.
//

#ifndef ErthCourse_hpp
#define ErthCourse_hpp

#include "Course.hpp"
#include <iostream>


class ErthCourse : public Course {
public:
    ErthCourse();
    ErthCourse(string course_code, int level, const string& description, float credit);
    ~ErthCourse();
    
private:
    
};

#endif /* ErthCourse_hpp */
