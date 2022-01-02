#include<iostream>
using namespace std;

void fun(int n,int k) {
    if(n<1)
        return;
    cout<<k<<' ';
    fun(n-1,k+1);
}

int main() {
    int num=9;

    fun(num,1);
    cout<<'\n';
    return 0;
}