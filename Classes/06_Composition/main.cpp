#include <iostream>
#include "Birthday.h"
#include "Person.h"
using namespace std;

int main() {
    Birthday b(17,11,1999);
    Person p("Sidhant",b);
    p.printInfo();
    return 0;
}