class personType {
    private: std::string FirstName;
    private: std::string SecoundName;
    private: std::string MiddleName;

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

    public: void set_middle_name (std::string);
            // this function we use it to set the middle name of the person
            // the person should be a string data type

    public: std::string get_middle_name () const;
            // this function we use it to return the the middle name value 

    public: personType (std::string, std::string, std::string);
            // this is the constructer its do as the the setter for first,
            // secound and middle name do 
            // it take these 3 string as parameter iy should be fill

    public: personType ();
            // if we set it by deafult the first and secoudn and middle will set 
            // by deafult value as empty like that FirstName = " ";
};




