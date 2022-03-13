#include <iostream>
using namespace std;
#ifndef Birthday_h
#define Birthday_h


class Birthday {
  private:
    int day;
    int month;
    int year;
  public:
    Birthday(int d, int m, int y)
    :day(d),month(m),year(y) {
    }
    void printDate() {
        cout<<day<<"/"<<month<<"/"
            <<year<<"\n";
    }
};

#endif