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

void studentType::Accept_money(float paid_moeny) {
    if(paid_moeny > 0) {
        money_on_hand = paid_moeny;
    } else {
        paid_moeny = 0;
    }
} 

float studentType::get_accept_money() const {
    return money_on_hand;
} 

bool studentType::is_enought(courseType coursess[]) const {
    coursess[get_NumberOfCourse()];
    return (money_on_hand >= Total(coursess));
} 

bool studentType::is_owns(courseType coursess[]) const {
    coursess[get_NumberOfCourse()];
    return (money_on_hand > Total(coursess));
} 

double studentType::Debtor(courseType course[]) const {
    course[get_NumberOfCourse()];
    float debtor = 0;
    if (Total(course) > get_accept_money()) {
        debtor = Total(course) - get_accept_money();
    }   
    return debtor;
}

void studentType::setInfo(std::string Fname, std::string Mname, std::string Lname, int NumberOfCourse, courseType course[]) {

set_NumberOfCourse(NumberOfCourse); // set number of the course

    personType::setInfo(Fname, Mname, Lname); // Set first, middle, and last name 
}

double studentType::get_GPA(courseType course[]) const {  
    float total_point = 0;
    for (int i = 0; i < get_NumberOfCourse(); i++) {
        total_point +=  course[i].getGradeValue() * course[i].get_course_credite();
    }  
        return (total_point / Total_CourseHour(course));
}

int studentType::Total_CourseHour(courseType course[]) const {
    course [get_NumberOfCourse()];
    int sum = 0;
        for (int i = 0 ; i < get_NumberOfCourse(); i++) {
            sum+= course[i].get_course_credite();
        } 
            return sum;
}

double studentType::Total(courseType course[]) const { 
    course[get_NumberOfCourse()];
    return (45 + (Total_CourseHour(course)) + 90);
}

int studentType::getID() const {
    return ID;
}

void studentType::printFile(std::ofstream& outFile, courseType courses[]) const {

    outFile.open("outFile.txt");
        outFile   << std::setw(20) << std::left << std::setfill(' ') << " Student Name     : " << personType::get_FullName() << "\n";
        outFile   << std::setw(20) << std::left << std::setfill(' ') << " courses enrolled : " << numberOfCourse << "\n";
        outFile   << std::setw(20) << std::left << std::setfill(' ') << " Student ID       : " << ID << "\n\n";

        outFile   << std::setw(20)  << std::left << std::setfill(' ') << " Course No ";
        outFile   << std::setw(20)  << std::left << std::setfill(' ') << " Course Name "; 
        outFile   << std::setw(15)  << std::left << std::setfill(' ') << " Credit";
        outFile   << std::setw(10)  << std::left << std::setfill(' ') << " Symbol";
        outFile   << std::setw(10)  << std::left << std::setfill(' ')  <<" Grade " << "\n";

        for (int i = 0; i < numberOfCourse; i++) {

                outFile  << " " << std::setw(20) << std::left << std::setfill(' ') << courses[i].get_course_id(); 
                outFile  << " " << std::setw(20) << std::left << std::setfill(' ') << courses[i].get_course_name();
                outFile  << " " << std::setw(15) << std::left << std::setfill(' ') << courses[i].get_course_credite();
                outFile         << std::setw(10) << std::left << std::setfill(' ') << courses[i].get_Grade();
                outFile         << std::setw(10) << std::left << std::setfill(' ') << courses[i].getGradeValue() << "\n";
        } 

    outFile  << std::setw(80) << std::left << std::setfill('*') << " " << "\n";
    outFile  << std::endl;
    outFile  << "Total number of credit hours: " << Total_CourseHour(courses) << std::endl;

    if (is_enought (courses) == true) {
         outFile  << "The GPA = " << get_GPA(courses) << std::endl;
        }  else {
            outFile  << "*** Grades are being held for not paying the tuition. *** \n";
            outFile  << "Amount Due: $" << Debtor(courses) << "\n";
        }   outFile  << std::setw(80) << std::left << std::setfill('*') << " " << "\n"; 
    
    outFile.close(); // Close the file after writing */ 
}    

void studentType::print(courseType courses[]) const {
        
        courses[get_NumberOfCourse()];
    
    std::cout << std::setw(80) << std::left << std::setfill('*') << " " << "\n";
    std::cout << std::setw(20) << std::left << std::setfill(' ') << " Student Name     : " << personType::get_FullName() << "\n";
    std::cout << std::setw(20) << std::left << std::setfill(' ') << " courses enrolled : " << numberOfCourse << "\n";
    std::cout << std::setw(20) << std::left << std::setfill(' ') << " Student ID       : " << ID << "\n\n";

    std::cout << std::setw(20)  << std::left << std::setfill(' ') << " Course No ";
    std::cout << std::setw(20)  << std::left << std::setfill(' ') << " Course Name "; 
    std::cout << std::setw(15)  << std::left << std::setfill(' ') << " Credit";
    std::cout << std::setw(10)  << std::left << std::setfill(' ') << " Symbol";
    std::cout << std::setw(10)  << std::left << std::setfill(' ')  <<" Grade " << "\n";

    for (int i = 0; i < numberOfCourse; i++) {
        std::cout   
                    << " " << std::setw(20) << std::left << std::setfill(' ') << courses[i].get_course_id() 
                    << " " << std::setw(20) << std::left << std::setfill(' ') << courses[i].get_course_name()
                    << " " << std::setw(15) << std::left << std::setfill(' ') << courses[i].get_course_credite()
                           << std::setw(10) << std::left << std::setfill(' ') << courses[i].get_Grade() 
                           << std::setw(10) << std::left << std::setfill(' ') << courses[i].getGradeValue() << "\n";
    } 

    std::cout  << std::setw(80) << std::left << std::setfill('*') << " " << "\n";
    std::cout  << std::endl;
    std::cout  << "Total number of credit hours: " << Total_CourseHour(courses) << std::endl;

    if (is_enought (courses) == true) {
        std::cout  << "The GPA = " << get_GPA(courses) << std::endl;
    } else {
          std::cout  << "*** Grades are being held for not paying the tuition. *** \n";
          std::cout  << "Amount Due: $" << Debtor(courses) << "\n";
    }     std::cout  << std::setw(80) << std::left << std::setfill('*') << " " << "\n"; 
    
}




studentType::studentType() {
    numberOfCourse = 1;
    ID = studentID;
    studentID++;
}

#endif
