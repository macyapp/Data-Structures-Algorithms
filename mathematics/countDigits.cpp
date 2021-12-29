#include<iostream>
#include<cmath>
using namespace std;

int countDigits(int n) {
    int digits;
    if(n==0)
        return 1;
    if(n<0)
        n=-n;
    digits=log10(n)+1;
    return digits;
}

int main() {
    int num;
    cin>>num;
    
    cout<<countDigits(num)<<'\n';
}
