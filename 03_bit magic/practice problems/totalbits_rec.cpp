#include<iostream>
#include<cmath>
using namespace std;

int count_bits(int n){
    if(n<=1)
        return n;
    int k=log2(n);

    return (k)*(1<<(k-1))+(n-(1<<k)+1)+count_bits(n-(1<<k));
}

int main() {
    int n; cin>>n;
    cout<<count_bits(n)<<endl;
    return 0;
}