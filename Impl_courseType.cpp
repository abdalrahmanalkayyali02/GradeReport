#include <iostream>
#include <fstream>
#include <iomanip>
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

void courseType::set_course_id(std::string id) {
    CourseID = id;
}

int courseType::get_course_credite() const {
    return CourseCredite;
}

void courseType::print(std::ofstream& outfile) {
    // print in the file 
    outfile.open("OutFile.txt",std::ios::app);
    outfile << std::setw(30) <<  std::setfill('*') << " "  << std::endl;
    outfile << "Course Name    : " << CourseName    << std::endl;
    outfile << "Course ID      : " << CourseID      << std::endl;
    outfile << "Course Credite : " << CourseCredite << std::endl;

    // print in the secreen to the use
    std::cout << std::setw(30) << std::left << std::setfill('*') << " " << std::endl;
    std::cout << "Course Name    : " << CourseName    << std::endl;
    std::cout << "Course ID      : " << CourseID      << std::endl;
    std::cout << "Course Credite : " << CourseCredite << std::endl;
    outfile.close();

    std::string line;
    std::ifstream inputFile;
    inputFile.open("outFile.txt");
    if (inputFile.is_open()) {
        while (inputFile) {
            std::getline (inputFile, line);
            std::cout << line << '\n';
        } 
    } else {
        std::cout << "Couldn't open file\n";
    }
} 

courseType::courseType() {
    CourseName    = " ";
    CourseCredite = 1;
    CourseID = " ";
} 

courseType::courseType(std::string courseName, std::string id, int courseCredite)  {
    set_course_name(courseName);
    set_course_credite(courseCredite);
    set_course_id(id);
}

