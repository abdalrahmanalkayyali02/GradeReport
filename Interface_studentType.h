#include <iostream>
#include <fstream>
#include "Interface_personType.h"
#include "Interface_courseType.h"

class studentType : public personType , courseType {
    private: static int studentID; // student ID
    private: int ID; // for storge studentID
    private: int numberOfCourse; // at least 1 and at most 6  
    private: courseType courseEnrolled[6];
    private: float money_on_hand; 

    public: void set_NumberOfCourse(int);
            // This function is used to set the number of the course 

    public: int get_NumberOfCourse() const;
            // this function is ued to return the course number

    public: void Accept_money(float);
        // This function of the class is modefay we can edite it data its take the money that user 
        // give it for the finace 

    public: float get_accept_money() const;
        // this function we use to get the accept money value with no medefecation for the data

    public: double Total(courseType[]) const;
        // This function we use to calcualte the totla its calcualte by 
        // the hour cost = 45 * number of the hour credite + 90 (tax)

    public: bool is_enought(courseType[]) const;
        // This fumction we use to cheack if the money that use give it is enought or not if yes 
        // we will return true else we will return false    
   
    public: bool is_owns(courseType[]) const;
        // This function we use to return if the user give the money more than total or cost if yse return 1 
        // else we will return false

    public: double Debtor(courseType[]) const;
        // This function is return the Debtor moeny that should user payed it

    public: void setInfo(std::string, std::string, std::string , int, courseType[]);
            /* This function is used for set the : 
               1- first , middle and last name
               2- set id 
               3- set number of the course */ 

    public: void printFile(std::ofstream&,courseType[]) const;
            // This function for show the out put as report and show the GPA
            // print all data in print function as file 

    public: void print(courseType[]) const;
            // This function is used for for print all data as :
            // course ID 
            // course Name
            // credite Hour
            // Grade
            // marks
            // total credite hour
            // print GPA if with finace moeny for company = 0
            // student name (first, middle, last)
            // student ID
            // number of course enrolled

    public: double get_GPA(courseType[]) const;
            // calclate the total GPA for all course

    public: int Total_CourseHour(courseType[]) const;
            // return the total course hour

    public: static void printID();

    public: int getID() const;
            // This function is used for get the id for student

    public: studentType();
            //deafult constructer

    private: void sortCourse();
             // This function is used for sort courses alphabatic
};


