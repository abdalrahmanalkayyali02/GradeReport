#include <iostream>
#include <iomanip>
#ifndef finaceType_H
#define finaceType_H
#include "Interface_finaceType.h"

void finaceType::Accept_money(float paid_moeny) {
    if(paid_moeny > 0) {
        money_on_hand = paid_moeny;
    } else {
        paid_moeny = 0;
    }
} 

float finaceType::get_accept_money() const {
    return money_on_hand;
}

int finaceType::Total_HourCredite(courseType courses[6]) const {
    int total_hour = 0;
    for (int i = 0; i < 6; i++) {
        total_hour+= courses[i].get_course_credite();
    } 

    return total_hour;
}

double finaceType::Total(courseType course[6]) const {
    return (45 + finaceType::Total_HourCredite(course));
}

bool finaceType::is_enought(courseType coursess[6]) const {
    return (money_on_hand >= Total(coursess));
} 

bool finaceType::is_owns(courseType coursess[6]) const {
     return (money_on_hand > finaceType::Total(coursess));
}

finaceType::finaceType() {
    money_on_hand = 0;
}

#endif
