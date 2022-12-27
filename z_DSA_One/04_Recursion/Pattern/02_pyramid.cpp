#include<iostream>
using namespace std;

void print_line(int n) {
    if(n==0)
        return;
    print_line(n-1);
    cout<<n<<" ";
}

void pyramid(int n) {
    if(n==0)
        return;
    pyramid(n-1);
    print_line(n);
    cout<<"\n";
}

int main() {
    pyramid(9);
    return 0;
}