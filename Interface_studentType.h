#include <iostream>
#include <fstream>
#include "Interface_courseType.h"
#include "Interface_personType.h"
#include "Interface_finaceType.h"

class studentType : public courseType, personType , finaceType {
    private: static int studentID;
    private: int numberOfCourse;
    private: courseType courseEnrolled[6];
    private: char courseGrade[6];
    private: bool isTutationPaied;

    public: void setInfo(std::string, std::string, std::string, int, int, bool, courseType[], char[])
        /* This function is used for set the : 
            1- first , middle and last name
            2- set id 
            3- set number of the course
            4- cheack if paied completely or not 
            5- courses data
            6- courses grade */ 
    public: void print(std::ofstream&, double);
        // This function for show the out put as report and show the GPA
    public: int get_HourEnrolled() const;
        // get the hour enrolled for the all course 
    public: double get_GPA() const;
        // calclate the total GPA for all course
    public: studentType();
        //deafult constructer
    private: void sortCourse();
};

int studentType::studentID = 1; 
