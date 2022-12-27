#include<iostream>
using namespace std;

void print_line(int n) {
    if(n==0)
        return;
    print_line(n-1);
    cout<<n<<" ";
}

int main() {
    print_line(9);
    return 0;
}