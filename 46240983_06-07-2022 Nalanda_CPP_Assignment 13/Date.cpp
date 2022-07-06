#include <iostream>
#include "Date.h"

using namespace std;

Date::Date(){
              day = 1;
              month = 1;
              year = 2001;
              cout << "\tDefault constructor called " << endl;
          };
Date::Date(int d){
              day = d;
              cout << "\tParameterised constructor 1 called " << endl;
          };
Date::Date(int d, int m, int y){
              day = d;
              month = m;
              year = y;
              cout << "\tParameterised constructor 2 called " << endl;
          }
int Date::getYear() {
              return year;
          }
void Date::setDate(int day, int month, int year) {
              cout << day << ":" << month << ":" << year << endl;
              this->day = day;
              this->month = month;
              this->year = year;
          }

void Date::getDate(){
              cout << day << "/" << month << "/" << year << endl;
          }

// TODO: Write C++ code to return name of month
// For month = 1 function returns "January", if month = 2 function returns "February" and so on ... 
string Date::getMonthName() {
                return "January";
          }

// TODO: Write C++ code to return true if year is leap year else return false
// year is leap year if it is divisible by 400 or 
// (it is divisible for 4 but not by 100)
bool Date::checkLeapYear() {
                  return true;
          };
