#include <iostream>
#include "Birthday.h"
using namespace std;
#ifndef Person_h
#define Person_h

class Person {
  private:
    string name;
    Birthday bd;
  public:
    Person(string n, Birthday b)
    :name(n),bd(b) {
    }
    void printInfo() {
        cout<<name<<"\n";
        bd.printDate();
    }
};

#endif