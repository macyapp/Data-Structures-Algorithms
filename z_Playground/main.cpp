#include<iostream>
using namespace std;

void print(int n) {
    if(n>=1) {
        cout<<n<<" ";
        print(n-1);
    }
}

void printLine(int n) {
    if(n>=1) {
        printLine(n-1);
        print(n);
        cout<<endl;
    }
}

void solve() {
    int n=9;
    printLine(n);
}

int main() {
    solve();
    return 0;
}