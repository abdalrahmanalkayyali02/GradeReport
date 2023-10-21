#include <iostream>
#include <fstream>
//#include "Interface_courseType.h"
#include "Interface_personType.h"
#include "Interface_finaceType.h"

class studentType : public personType , finaceType {
    private: static int studentID;
    private: int ID;
    private: int numberOfCourse;
    private: courseType courseEnrolled[6];
    private: char courseGrade[6];
    private: bool isTutationPaied;

    public: void set_NumberOfCourse(int);
            // This function is used to set the number of the course 

    public: int get_NumberOfCourse() const;
            // this function is ued to return the course number

    public: void set_is_tutation_paied(bool);
            // This function is to cheack if it was paied oe not 

    public: void setInfo(std::string, std::string, std::string , int, bool, courseType[], char[]);
            /* This function is used for set the : 
               1- first , middle and last name
               2- set id 
               3- set number of the course
               4- cheack if paied completely or not 
               5- courses data
               6- courses grade */ 

    public: void printFile(std::ofstream&,courseType[], int);
            // This function for show the out put as report and show the GPA
            // print all data in print function as file 

    public: void print(courseType[], int) const;
            // This function is used for for print all data as :
            // course ID 
            // course Name
            // credite Hour
            // Grade
            // total credite hour
            // print GPA if with finace moeny for company = 0
            // student name (first, middle, last)
            // student ID
            // number of course enrolled

    public: double get_GPA(courseType[], int) const;
            // calclate the total GPA for all course

    public: static void printID();

    public: int getID() const;
            // This function is used for get the id for student

    public: studentType();
            //deafult constructer

    private: void sortCourse();
             // This function is used for sort courses alphabatic
};


