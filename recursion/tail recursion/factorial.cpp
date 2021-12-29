#include<iostream>
using namespace std;

int fact(int n,int k) {
    if(n==1||n==0)
        return k;

    return fact(n-1,k*n);
}

int main() {
    int num=10;

    fact(num,1);
    cout<<fact(num,1)<<'\n';
    return 0;
}