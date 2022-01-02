//Given code is in non-tail recursive form
//Convert to tail recursive form
#include<iostream>
using namespace std;

void binary(int n) {
    if(n==0)
        return;
    binary(n/2);
    cout<<(n%2);
}

int main() {
    int num;
    cin>>num;

    binary(num);
    cout<<'\n';
}