#include<iostream>
using namespace std;

int main() {
    int a,b,n,count=0;
    a=22;
    b=27;
    n=a^b;
    while(n) {
        n=n&(n-1);
        count++;
    }
    cout<<count<<"\n";
    return 0;
}