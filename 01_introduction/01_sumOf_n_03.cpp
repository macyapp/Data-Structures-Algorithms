/*
Sum of 'n' natural numbers
O(1)
*/
#include<iostream>
using namespace std;

int sum_n(int n) {
    int sum;
    sum=(n*(n+1))/2;
    return sum;
}

int main() {
    int n=10;
    cout<<"Sum of "<<n<<" natural numbers = "<<sum_n(n)<<'\n';;
    return 0;
}