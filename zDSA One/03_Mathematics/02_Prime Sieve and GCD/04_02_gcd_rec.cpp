#include<iostream>
using namespace std;

int gcd(int m, int n) {
    if(n==0) {
        return m;
    }
    return gcd(n,m%n);
}

int main() {
    int a=12,b=15;
    cout<<gcd(a,b)<<"\n";
    return 0;
}