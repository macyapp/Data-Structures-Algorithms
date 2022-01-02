#include<iostream>
using namespace std;

int setbit(int n) {
    int res=0;
    for(;n!=0;n&=(n-1)) {
        res++;
    }
    return res;
}

int main() {
    int num;
    cout<<"Enter number:\n";
    cin>>num;
    cout<<"No. of set bits: "<<setbit(num)<<'\n';
    return 0;
}
