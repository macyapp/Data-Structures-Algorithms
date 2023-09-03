#include<iostream>
using namespace std;

class stack {
public:
    int *a;     // Dynamically allocating array
    int top;   // Size of the stack
    int cap;    // Capacity
    stack(int c)
    :top(-1), a(new int[c]) {
    }

    void push(int x) {
    }

    int pop() {
    }

    int peek() {
    }

    int size() {
    }

    bool empty() {
    }
};

void solve() {
    stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<boolalpha<<s.empty()<<endl;
}

int main() {
    solve();
    return 0;
}