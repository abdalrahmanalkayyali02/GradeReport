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

std::string courseType::get_course_id() const {
    return CourseID;
}

int courseType::get_course_credite() const {
    return CourseCredite;
}

void courseType::set_courseMark(float marks) {
    if((marks >= 0) && (marks <= 100)) {
        CourseMarks = marks;
    } else { 
        CourseMarks = 0;
    } 
} 

float courseType::get_CourseMarks() const {
    return CourseMarks;
} 

void courseType::MergeGrade(char grade1, char grade2)  {
    std::cout << grade1 << grade2 << std::endl;
}

void courseType::get_Grade(float gradeValue) {

    if (CourseMarks >= 90) {
        MergeGrade(' ','A');
        GradeValue = 4;

    } else if ((CourseMarks > 80) && (CourseMarks <= 85)) {
        MergeGrade('-','A');
        GradeValue = 3.75;

    } else if ((CourseMarks > 75) && (CourseMarks <= 80)) {
        MergeGrade('+','B');
        GradeValue = 3.5;

    } else if ((CourseMarks > 70) && (CourseMarks <= 75)) {
        MergeGrade(' ','B');
        GradeValue = 3;

    } else if ((CourseMarks > 65) && (CourseMarks <= 70)) {
        MergeGrade('-','B');
        GradeValue = 2.75;

    } else if ((CourseMarks > 60) && (CourseMarks <= 65)) {
        MergeGrade('+','C');
        GradeValue = 2.5;

    } else if ((CourseMarks > 55) && (CourseMarks <= 60)) {
        MergeGrade(' ','C');
        GradeValue = 2;

    } else if ((CourseMarks > 50) && (CourseMarks <= 55)) {
        MergeGrade('-','C');
        GradeValue = 1.75;

    } else if ((CourseMarks > 45) && (CourseMarks <= 50)) {
        MergeGrade('+','D');
        GradeValue = 1.5;

    } else if ((CourseMarks > 40) && (CourseMarks <= 45)) {
        MergeGrade(' ','D');
        GradeValue = 1;

    } else if ((CourseMarks > 35) && (CourseMarks <= 40)) {
        MergeGrade('-','D');
        GradeValue = 0.75;

    } else if (CourseMarks <= 30) {
        MergeGrade(' ','F');
        GradeValue = 0;
    }   
}

float courseType::getGradeValue() const {
    return GradeValue;
}

void courseType::printFile(std::ofstream& outfile) {
    // print in the file 
    outfile.open("outFile.txt",std::ios::app);
    outfile << std::setw(30) <<  std::setfill('*') << " "  << std::endl;
    outfile << " Course Name    : " << CourseName    << std::endl;
    outfile << " Course ID      : " << CourseID      << std::endl;
    outfile << " Course Credite : " << CourseCredite << std::endl;
    outfile << " Course Grade   : " << CourseGrade   << std::endl;
    outfile << " Course Value   : " << GradeValue    << std::endl;
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

void courseType::print() {
    std::cout << std::setw(30) << std::left << std::setfill('*') << " " << std::endl;
    std::cout << " Course Name    : " << CourseName    << std::endl;
    std::cout << " Course ID      : " << CourseID      << std::endl;
    std::cout << " Course Credite : " << CourseCredite << std::endl;
    std::cout << " Course Grade   : " << CourseGrade   << std::endl;
    std::cout << " Course Value   : " << GradeValue    << std::endl;
}


courseType::courseType() {
    CourseName    = " ";
    CourseCredite = 1;
    CourseID = " ";
    CourseMarks = 0;
    CourseGrade = 'F';
} 

courseType::courseType(std::string courseName, std::string id, int courseCredite) {
    set_course_name(courseName);
    set_course_credite(courseCredite);
    set_course_id(id);
}
