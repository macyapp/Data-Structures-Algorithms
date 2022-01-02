#include<iostream>
using namespace std;

bool kthbit(int n,int k) {
    if((n>>(k-1))&1)
        return true;
    else
        return false;
}

int main() {
    int num,k;
    cout<<"Enter number:\n";
    cin>>num;
    cout<<"Enter k:\n";
    cin>>k;

    if(kthbit(num,k)) {
        cout<<"kth bit is set\n";
    }
    else {
        cout<<"kth bit is not set\n";
    }
    return 0;
}
