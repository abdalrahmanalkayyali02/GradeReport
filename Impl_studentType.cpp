#include <iostream>
#include <iomanip>
#include <fstream>
#ifndef studentType_H
#define studentType_H
#include "Interface_studentType.h"

int studentType::studentID = 202310001; 

void studentType::set_NumberOfCourse(int number_of_course) {

    if ((number_of_course > 0) && (number_of_course <= 6)) {
        numberOfCourse = number_of_course;
    } else if (number_of_course < 0) {
        numberOfCourse = 1;
    } else {
        numberOfCourse = 6;
    }
}

int studentType::get_NumberOfCourse() const {
    return numberOfCourse;
}

void studentType::setInfo(std::string Fname, std::string Mname, std::string Lname, int NumberOfCourse, bool is_paied, courseType course[], char grade []) {

    set_NumberOfCourse(NumberOfCourse);
    course[NumberOfCourse];
    grade[NumberOfCourse];                  
    personType::setInfo(Fname, Mname, Lname); // for set the name first, middle, and last name 
    is_paied = finaceType::is_enought(course);// for set the paied value 
}

double studentType::get_GPA(courseType course[], int number_of_course) const { 

    double sum = 0;
    double total = 0;

    set_NumberOfCourse(number_of_course);

    for (int i = 0; i < number_of_course; i++) {
        sum =+ course[i].getGradeValue();
    } 
    total = sum/number_of_course;
    return total;    
}

void studentType::printFile(std::ofstream& outFile, courseType courses[], int course_size) {

    outFile.open("outFile.txt");
    set_NumberOfCourse(course_size);

    outFile   << std::setw(100) << std::left << std::setfill('*') << " " << "\n\n"
        << std::setw(100) << std::left << std::setfill(' ') << "Student Name: " << personType::get_FullName()
        << std::setw(100) << std::left << std::setfill(' ') << "Number of courses enrolled: " << numberOfCourse
        << std::setw(100) << std::left << std::setfill(' ') << "Student ID: " << ID << "\n\n"

        << std::setw(25)  << std::left << std::setfill(' ') << "Course No "
        << std::setw(25)  << std::left << std::setfill(' ') << "Course Name " 
        << std::setw(25)  << std::left << std::setfill(' ') << "Credite"
        << std::setw(25)  << std::left << std::setfill(' ') << "Grade" << "\n";

    for (int i = 0; i < numberOfCourse; i++) {
        outFile << std::setw(25) << std::left << std::setfill(' ') << courses[i].get_course_id() 
            << std::setw(25) << std::left << std::setfill(' ') << courses[i].get_course_name()
            << std::setw(25) << std::left << std::setfill(' ') << courses[i].get_course_credite()
            << std::setw(25) << std::left << std::setfill(' ') << courses[i].getGradeValue() << "\n";
    } 
    outFile << "Total number of credit hours: " << finaceType::Total_HourCredite(courses);

    if(isTutationPaied == true) {
        outFile << "Mid-Semester GPA: " << get_GPA(courses, course_size) << "\n";
    } 

    outFile     << std::setw(100) << std::left << std::setfill('*') << " " << "\n\n";
}  

void studentType::print(courseType courses[], int course_size) const {
    
        set_NumberOfCourse(course_size);
        
        std::cout 
        << std::setw(100) << std::left << std::setfill('*') << " " << "\n\n"
        << std::setw(100) << std::left << std::setfill(' ') << "Student Name: " << personType::get_FullName()
        << std::setw(100) << std::left << std::setfill(' ') << "Number of courses enrolled: " << numberOfCourse
        << std::setw(100) << std::left << std::setfill(' ') << "Student ID: " << ID << "\n\n"

        << std::setw(25)  << std::left << std::setfill(' ') << "Course No "
        << std::setw(25)  << std::left << std::setfill(' ') << "Course Name " 
        << std::setw(25)  << std::left << std::setfill(' ') << "Credite"
        << std::setw(25)  << std::left << std::setfill(' ') << "Grade" << "\n";

    for (int i = 0; i < numberOfCourse; i++) {
        std::cout  << std::setw(25) << std::left << std::setfill(' ') << courses[i].get_course_id() 
            << std::setw(25) << std::left << std::setfill(' ') << courses[i].get_course_name()
            << std::setw(25) << std::left << std::setfill(' ') << courses[i].get_course_credite()
            << std::setw(25) << std::left << std::setfill(' ') << courses[i].getGradeValue() << "\n";
    }  
    std::cout   << "Total number of credit hours: " << finaceType::Total_HourCredite(courses);

    if(isTutationPaied == true) {
        std::cout  << "Mid-Semester GPA: " << get_GPA(courses, course_size) << "\n";
    } 
    std::cout  << std::setw(100) << std::left << std::setfill('*') << " " << "\n\n";
}  

void studentType::printID() {
    std::cout << studentID << std::endl;
}

int studentType::getID() const {
    return ID;
}

studentType::studentType() {
    numberOfCourse = 1;
    ID = studentID;
    studentID++;
}

#endif

