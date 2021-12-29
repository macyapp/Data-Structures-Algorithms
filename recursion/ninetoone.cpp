#include<iostream>
using namespace std;

void fun(int n) {
    if(n<1)
        return;
    cout<<n<<' ';
    fun(n-1);
}

int main() {
    int num=9;

    fun(num);
    cout<<'\n';
    return 0;
}