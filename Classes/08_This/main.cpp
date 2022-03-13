#include <iostream>
using namespace std;

class MyClass {
  public:
    MyClass(int a)
    :var(a) {
    }
    void printInfo() {
        cout<<var<<"\n";
        cout<<this->var<<"\n";
        cout<<(*this).var<<"\n"; 
    }
  private:
    int var;
};

int main() {
    MyClass obj(42);
    obj.printInfo();
}