#include <string>
class personType {

    private: std::string FirstName; //to set the first name 
    private: std::string SecoundName; // to set the secund name
    private: std::string LastName; // to set the last name

    public: void set_first_name (std::string);
            // this function we use it to set the first name of the person
            // the person should be a string data type

    public: std::string get_first_name () const;
            // this function we use it to return the the frist name value 

    public: void set_secound_name (std::string);
            // this function we use it to set the secound name of the person
            // the person should be a string data type

    public: std::string get_secound_name () const;
            // this function we use it to return the the secound name value 

    public: void set_last_name (std::string);
            // this function we use it to set the middle name of the person
            // the person should be a string data type

    public: std::string get_last_name () const;
            // this function we use it to return the the middle name value 

    public: void setInfo(std::string, std::string, std::string);
           // This function we use to set the the info first, middle and last name 

    public: void print() const;
                // print the data for the perosn first name, middle name , and last name 
    
    public: personType (std::string, std::string, std::string);
            // this is the constructer its do as the the setter for first,
            // secound and middle name do 
            // it take these 3 string as parameter iy should be fill

    public: personType ();
            // if we set it by deafult the first and secoudn and middle will set 
            // by deafult value as empty like that FirstName = " ";
};

