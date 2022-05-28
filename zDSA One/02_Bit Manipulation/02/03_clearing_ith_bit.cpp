#include<iostream>
using namespace std;

int main() {
    int a,i,mask;
    a=317;
    i=3;    // Let the position be 3
    mask=~(1<<i);
    a=a&mask;
    cout<<a<<"\n";
    return 0;
}