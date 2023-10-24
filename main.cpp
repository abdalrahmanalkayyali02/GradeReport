#include <iostream>
#include "Interface_studentType.h"

void num(int[], int);
int main() {
    // courseType
    std::string course_name,course_id, Fname,Mname,Lname;
    int course_credite, number_of_course, number_of_student;
    float marks, cost;
    std::ofstream outFile; 

        
    std::cout << "Enter the student Number : ";
    std::cin >> number_of_student;
    studentType student[number_of_student];

    for (int j = 0; j < number_of_student; j++) {

        std::cout << "Enter the student first name : ";
        std::cin  >> Fname;

        std::cout << "Enter the student middle name : ";
        std::cin >> Mname;

        std::cout << "Enter the student Last name : ";
        std::cin >> Lname;

        std::cout << "Enter the number of the course : ";
        std::cin >> number_of_course;
        student[j].set_NumberOfCourse(number_of_course);
        std::cout << std::endl;
    
    // decrlate object of the courseTye
        courseType course[number_of_course];

        for (int i = 0; i < number_of_course; i++) {
        
            std::cout << std::endl;
            std::cout << " # Detail for the student " << ( i + 1) << std::endl;
            std::cout << std::endl;

            std::cout << "Enter the course Name for student " << (i + 1) << " : ";
            std::cin >> course_name;
            course[i].set_course_name(course_name);

            std::cout << "Enter the course ID for student " << (i + 1) << " : ";
            std::cin >> course_id;
            course[i].set_course_id(course_id);

            std::cout << "Enter the course credite Hour for student " << (i + 1) << " : ";
            std::cin >> course_credite;
            course[i].set_course_credite(course_credite);

            std::cout << "Enter the course Mark for student " << (i + 1) << " : ";
            std::cin >> marks;
            course[i].set_courseMark(marks);
        } 
     
    
            std::cout << "The Total cost is = " << student[j].Total(course) << std::endl;
            std::cout << "paied money : ";
            std::cin >>  cost;
            student[j].Accept_money(cost);
    
            student[j].setInfo(Fname, Mname, Lname, number_of_course, course);
            student[j].print(course);
            student[j].printFile(outFile,course);
        }

        return 0;
    }



    






      