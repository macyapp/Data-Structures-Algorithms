#include<iostream>
using namespace std;

class Stack {
public:
    int *a;
    int cap;
    int top;
    Stack(int c)
    :cap(c),top(-1),a(new int[c]) {
    }
};

int main() {
    return 0;
}