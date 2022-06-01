#include<iostream>
using namespace std;

void sieve(int n) {
    int i,j;
    if(n<=1)
        return;
    bool a[n+1];
    a[0]=false;
    a[1]=false;
    fill(a,a+n+1,true);
    for(i=2;i*i<=n;i++) {
        if(a[i]) {
            for(j=i*i;j<=n;j+=i) {
                a[j]=false;
            }
        }
    }
    for(i=2;i<=n;i++) {
        if(a[i]) {
            cout<<i<<" ";
        }
    }
    cout<<"\n";
}

int main() {
    int num;
    cin>>num;
    sieve(num);
    return 0;
}