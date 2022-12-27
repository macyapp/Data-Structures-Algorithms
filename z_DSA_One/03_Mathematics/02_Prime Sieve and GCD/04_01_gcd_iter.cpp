#include<iostream>
using namespace std;

int gcd(int m, int n) {
    int r;
    while(n) {
        r=m%n;
        m=n;
        n=r;
    }
    return m;
}

int main() {
    int a=12,b=15;
    cout<<gcd(a,b)<<"\n";
    return 0;
}