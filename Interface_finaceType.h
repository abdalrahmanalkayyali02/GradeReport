#include <iostream>

class finaceType {
    private: float money_on_hand;

    public: void Accept_money(float);
        // This function of the class is modefay we can edite it data its take the money that user 
        // give it for the finace 
    
    public: float get_accept_money() const;
        // this function we use to get the accept money value with no medefecation for the data

    public: double Total() const;
        // This function we use to calcualte the totla its calcualte by 
        // the hour cost = 45 * number of the hour credite + 90 (tax)
    
    public: bool is_enought() const;
        // This fumction we use to cheack if the money that use give it is enought or not if yes 
        // we will return true else we will return false    
    
    public: bool is_owns() const;
        // This function we use to return if the user give the money more than total or cost if yse return 1 
        // else we will return false
};
