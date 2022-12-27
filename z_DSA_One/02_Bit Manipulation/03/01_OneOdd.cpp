#include<iostream>
using namespace std;

int main() {
    int a[]={5,4,1,4,3,5,1};
    int n=sizeof(a)/sizeof(a[0]);
    int i, res=0;
    for(i=0;i<n;i++) {
        res=res^a[i];
    }
    cout<<res<<"\n";
    return 0;
}