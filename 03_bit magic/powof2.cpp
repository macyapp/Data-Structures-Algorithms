#include<iostream>
using namespace std;

bool powof2(int n) {
    if(n==0)
        return true;
    return ((n&(n-1))==0);
}

int main() {
    int num;
    cout<<"Enter number:\n";
    cin>>num;
    if(powof2(num))
        cout<<num<<" is power of 2\n";
    else
        cout<<num<<" is not power of 2\n";
    return 0;
}
