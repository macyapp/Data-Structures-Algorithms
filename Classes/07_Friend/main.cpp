#include <iostream>
using namespace std;

class MyClass {
  private:
    int regVar;
    friend void someFunc(MyClass &obj);
  public:
    MyClass() {
        regVar=0;
    }
};

void someFunc(MyClass &obj) {
    obj.regVar=42;
    cout<<obj.regVar<<"\n";
}

int main() {
    MyClass obj;
    someFunc(obj);
    return 0;
}