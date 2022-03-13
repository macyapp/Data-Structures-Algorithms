#include <iostream>
#include "MyClass.h"
using namespace std;

MyClass::MyClass(int a, int b)
:regVar(a), constVar(b) {
    cout<<regVar<<" ";
    cout<<constVar<<"\n";
}