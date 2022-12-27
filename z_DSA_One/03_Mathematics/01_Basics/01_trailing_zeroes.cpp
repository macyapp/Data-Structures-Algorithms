#include<iostream>
using namespace std;

int main() {
    int num,i,zeroes=0;
    num=10;
    for(i=5;i<=num;i*=5) {
        zeroes+=num/i;
    }
    cout<<zeroes<<"\n";
    return 0;
}