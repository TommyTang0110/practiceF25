#include "date.h"
#include <iostream>
#include <sstream>

namespace {
    const char* MONTH_NAMES[13] = {
        "", "January","February","March","April","May","June",
        "July","August","September","October","November","December"
    };
}

Date::Date() : month(1), day(1), year(1970) {}

Date::Date(int m, int d, int y) : month(m), day(d), year(y) {}

void Date::init(const std::string& mmddyyyy) {
   
    std::string s = mmddyyyy;
    
    size_t p1 = s.find('/');
    size_t p2 = (p1 == std::string::npos) ? std::string::npos : s.find('/', p1 + 1);

    if (p1 == std::string::npos || p2 == std::string::npos) {
       
        month = 1; day = 1; year = 1970;
        return;
    }

    int m = std::stoi(s.substr(0, p1));
    int d = std::stoi(s.substr(p1 + 1, p2 - p1 - 1));
    int y = std::stoi(s.substr(p2 + 1));

    month = m; day = d; year = y;
}

void Date::printDate() const {
    int m = month;
    if (m < 1 || m > 12) m = 1; 
    std::cout << MONTH_NAMES[m] << " " << day << ", " << year << std::endl;
}
