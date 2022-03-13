#include <iostream>
using namespace std;

class BankAccount {
    public:
        void sayHi() {
            cout<<"Hi\n";
        }
};

int main() {
    BankAccount test;
    test.sayHi();
}