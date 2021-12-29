#ifndef PERSON_H
#define PERSON_H
#include<iostream>
#include<string>
#include "Birthday.h"
using namespace std;

class Person {
    public:
        Person(string nm, Birthday b)
        :name(nm), bd(b) {
        }

        void printInfo() {
            cout<<name<<'\n';
            bd.printDate();
        }
    private:
        string name;
        Birthday bd;
};

#endif