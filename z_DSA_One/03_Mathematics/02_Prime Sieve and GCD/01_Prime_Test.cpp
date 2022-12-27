#include<iostream>
using namespace std;

bool isPrime(int n) {
    int i;
    for(i=2;i*i<=n;i++) {
        if(n%i==0)
            return false;
    }
    return true;
}

int main() {
    int num;
    cin>>num;
    cout<<boolalpha<<isPrime(num)<<"\n";
    return 0;
}