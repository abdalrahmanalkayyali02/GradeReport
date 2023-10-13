#include <string>
#include <fstream>

class courseType {
    private: std::string CourseName;
    private: static int CourseID;
    private: int CourseCredite;

    public: void set_course_name(std::string);
            // this function we use to set the course name it take as string
            // in the parameter

    public: std::string get_course_name() const;
            // this function we use to get the value or rerurn it value 

    public: int get_course_id();
            // this function we use to return and the get the value for the 
            // id value it constant and not take any parameter between partness

    public: void set_course_credite(int);
            // this function we use to set the number of the hour for the student
            // the number must be at leat 1 and ant most be 21 

    public: int get_course_credite() const;
            //this function we use to set and get and return the value of the course 
            //credite number 

    public: void print(std::ostream&);
            //this function we use to print the course detail in the file using 
            //file stream and print the course detatil for use 

    public: courseType();
            // this constructer we use to set the deafult value 
            // the course name and course id set them fo empty 
            // the course credite set them to 1 at least 

    public: courseType(std::string, int, int);
            //this construter we use to set the course name, couse id and 
            //the coudse credite by the parameter between them it have three 
            //paramete between partnesss we use the function from this class 
            //to make it easy to define constructer
};

int courseType::CourseID = 1;