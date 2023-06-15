#include <iostream>
#include <string>
#ifndef courseType_H
#define courseType_H
#include "Interface_courseType.h"

void courseType::set_course_name(std::string courseName) {
    CourseName = courseName;
}

std::string courseType::get_course_name() const {
    return CourseName;
} 

void courseType::set_course_credite(int courseCredite) {
    if (courseCredite <= 0) {
        CourseCredite = 1;
    } else if ((courseCredite >= 1) && (courseCredite <= 21)) {
        CourseCredite = courseCredite;
    } else {
        std::cout << "You enter Incorrect value !";
    }
} 

int courseType::get_course_credite() const {
    return CourseCredite;
}

void courseType::set_course_id(std::string courseID) { 
    CourseID = courseID;
}

std::string courseType::get_course_id() const {
    return CourseID;
}

courseType::courseType() {
    CourseName    = " ";
    CourseID      = " ";
    CourseCredite = 1  ;
} 

courseType::courseType(std::string courseName, std::string courseID, int courseCredite) {
    set_course_name(courseName);
    set_course_id(courseID);
    set_course_credite(courseCredite);
}

#endif
