#include<iostream>
#include "Birthday.h"
#include "Person.h"
using namespace std;
int main() {
    Birthday obj(17,11,1999);
    Person p("Sidhant Kumar Nayak",obj);
    p.printInfo();
    return 0;
}
