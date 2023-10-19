#include <iostream>
#include <iomanip>
#include <fstream>
#ifndef studentType_H
#define studentType_H
#include "Interface_studentType.h"

int studentType::studentID = 202310000; 

void studentType::setInfo(std::string Fname, std::string Mname, std::string Lname, int NumberOfCourse, bool is_paied, courseType course[], char grade []) {
        if (NumberOfCourse > 0) {
            numberOfCourse = NumberOfCourse;
        } else {
            numberOfCourse = 1;
        }

        course[NumberOfCourse];
        grade[NumberOfCourse];                  
        personType::setInfo(Fname, Mname, Lname); // for set the name first, middle, and last name 
        is_paied = finaceType::is_enought(course);// for set the paied value 
}

void studentType::printFile(std::ofstream outFile, double GPA) {
    outFile.open("outFile.txt");
    outFile   << std::setw(100) << std::left << std::setfill('*') << " " << "\n\n"
              << std::setw(100) << std::left << std::setfill(' ') << "Student Name: " << personType::print_FullName()
              << std::setw(100) << std::left << std::setfill(' ') << "Number of courses enrolled: " << numberOfCourse
              << std::setw(100) << std::left << std::setfill(' ') << "Student ID: " << studentID << "\n\n"

              << std::setw(25)  << std::left << std::setfill(' ') << "Course No "
              << std::setw(25)  << std::left << std::setfill(' ') << "Course Name " 
              << std::setw(25)  << std::left << std::setfill(' ') << "Credite"
              << std::setw(25)  << std::left << std::setfill(' ') << "Grade" << "\n";

    for (int i = 0; i < numberOfCourse; i++) {
        outFile << std::setw(25) << std::left << std::setfill(' ') << courseType::get_course_id() 
                << std::setw(25) << std::left << std::setfill(' ') << courseType::get_course_name()
                << std::setw(25) << std::left << std::setfill(' ') << courseType::get_course_credite()
                << std::setw(25) << std::left << std::setfill(' ') << courseType::get_Grade() << "\n";
    } 
        outFile << "Total number of credit hours: " << finaceType::Total_HourCredite(course);
        if(is_paied == true) {
            outFile << "Mid-Semester GPA: " << 
        }

}

studentType::studentType() {
    numberOfCourse = 1;
    studentID++;
}

    

#endif

