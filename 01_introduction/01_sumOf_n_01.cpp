/*
Sum of 'n' natural numbers
O(n^2)
*/
#include<iostream>
using namespace std;

int sum_n(int n) {
    int i, j, sum=0;
    for(i=1;i<=n;i++) {
        for(j=1;j<=i;j++) {
            sum++;
        }
    }
    return sum;
}

int main() {
    int n=10;
    cout<<"Sum of "<<n<<" natural numbers = "<<sum_n(n)<<'\n';;
    return 0;
}