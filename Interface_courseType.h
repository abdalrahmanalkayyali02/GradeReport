#include <string>
class courseType {
    private: std::string CourseName;
    private: std::string CourseID;
    private: int CourseCredite;

    public: void set_course_name(std::string);
            // this function we use to set the course name it take as string
            // in the parameter

    public: std::string get_course_name() const;
            // this function we use to get the value or rerurn it value 

    public: void set_course_id(std::string); 
            // this function we use to set the id for the course this id for
            // course it should be uniqe and have some id number must be take 
            // care about it see file README.md to see all file

    public: std::string get_course_id() const;
            // this function we use to return and the get the value for the 
            // id value it constant and not take any parameter between partness

    public: void set_course_credite(int);
            // this function we use to set the number of the hour for the student
            // the number must be at leat 1 and ant most be 21 

    public: int get_course_credite() const;
            //this function we use to set and get and return the value of the course 
            //credite number 

   // public: bool uniqe_course_id() const;
            // this function we use to cheack if the id is uniqe or not 
            // it return true if the id is uniqe and false it it is not
    
    public: courseType();
            // this constructer we use to set the deafult value 
            // the course name and course id set them fo empty 
            // the course credite set them to 1 at least 

    public: courseType(std::string, std::string, int);
            //this construter we use to set the course name, couse id and 
            //the coudse credite by the parameter between them it have three 
            //paramete between partnesss we use the function from this class 
            //to make it easy to define constructer
};