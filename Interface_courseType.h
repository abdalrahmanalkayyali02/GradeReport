#include <string>
#include <fstream>

class courseType {
    private: std::string CourseName;
    private: std::string CourseID;
    private: int CourseCredite;
    private: float CourseMarks;
    private: char CourseGrade;

    public: void set_course_name(std::string);
            // this function we use to set the course name it take as string
            // in the parameter

    public: std::string get_course_name() const;
            // this function we use to get the value or rerurn it value 

    public: void set_course_id(std::string);
           // this function for set the course id it make as string in the 
           // parameter 
    
    public: std::string get_course_id() const;
            // this function we use to return and the get the value for the 
            // id value it constant and not take any parameter between partness

    public: void set_course_credite(int);
            // this function we use to set the number of the hour for the student
            // the number must be at leat 1 and ant most be 21 

    public: int get_course_credite() const;
            //this function we use to set and get and return the value of the course 
            //credite number 

    public: void set_courseMark(float);
            // This function is used to set the course marks

    public: float get_CourseMarks() const;
            // This function is used to return the marks value 

    public: std::string get_Grade() const;
            // This function is used to ge the grade 

    public: float getGradeValue() const;
            // This function is used to return the grade value

    public: void printFile(std::ofstream&);
             // This function is used to return the grade value 
             // This function is used to return the grade value 
            //this function we use to print the course detail in the file using 
            //file stream and print the course detatil for use 
    
    public: void print();
            // this function use to print the course detail to the screen 
    
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
