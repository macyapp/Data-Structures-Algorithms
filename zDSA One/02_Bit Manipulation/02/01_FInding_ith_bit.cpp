#include<iostream>
using namespace std;

int main() {
    int a,i,mask;
    a=309;
    i=5;    // Let the position be 5
    mask=1<<i;
    if(a&mask) {
        cout<<"Set\n";
    }
    else {
        cout<<"Not Set\n";
    }
    return 0;
}