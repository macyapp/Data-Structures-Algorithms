#include <iostream>
#include "MyClass.h"
using namespace std;

int main() {
    MyClass obj;
    MyClass *ptr=&obj;  // Address is a
    // Dot Operator (uses object name)
    obj.myPrint();
    // Selection operator (uses a pointer)
    ptr->myPrint();
    return 0;
}