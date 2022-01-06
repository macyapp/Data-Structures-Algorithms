#include<iostream>
#include<cmath>
using namespace std;

int count_bits(int n){
    int k,cnt=0;
    while(n) {
        k=log2(n);
        // First term gives the no. of set bits for perfect powers of 2 (2, 4, 8)
        // i.e. 1 to pow(2,k)-1 is                  --> k*pow(2,k-1)
        // Second term gives the no. of set bits for 
        // pow(2,k) to n is                         --> n-pow(2,k)+1    (+1 is added to add the bit of pow(2,k))
        cnt+=(k)*(1<<(k-1))+(n-(1<<k)+1);
        n-=(1<<k);
    }
    return cnt;
}

int main() {
    int n;
    cin>>n;
    cout<<count_bits(n)<<endl;
    return 0;
}