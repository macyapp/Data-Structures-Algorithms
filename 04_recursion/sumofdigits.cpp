#include<iostream>
using namespace std;

int sumdig(int n) {
    if(n==0)
        return 0;
    return n%10+sumdig(n/10);
}

int main() {
    int num;
    cin>>num;
    cout<<sumdig(num)<<'\n';
    return 0;
}