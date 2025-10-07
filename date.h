#ifndef DATE_H
#define DATE_H

#include <string>

class Date {
private:
    int month; 
    int day;   
    int year;  

public:
    Date();
    Date(int m, int d, int y);
    void init(const std::string& mmddyyyy); 
    void printDate() const;                

   
    int getMonth() const { return month; }
    int getDay()   const { return day; }
    int getYear()  const { return year; }
};

#endif
