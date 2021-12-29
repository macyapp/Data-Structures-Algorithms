/*
Sum of 'n' natural numbers
O(n)
*/
#include<iostream>
using namespace std;

int sum_n(int n) {
    int i, sum=0;
    for(i=1;i<=n;i++) {
        sum+=i;
    }
    return sum;
}

int main() {
    int n=10;
    cout<<"Sum of "<<n<<" natural numbers = "<<sum_n(n)<<'\n';;
    return 0;
}