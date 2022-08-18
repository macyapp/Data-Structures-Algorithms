#include<iostream>
#include<vector>
using namespace std;
#define vi vector<int>

void initialize(vi& a,int n) {
    int i,input;
    for(i=0;i<n;i++) {
        cin>>input;
        a.push_back(input);
    }
}

void print(vi& a,int n) {
    int i;
    for(i=0;i<n;i++) {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}

vi solve(vi& a,vi& b,int m,int n) {
    int size=m+n;
    vi c(size);
    int i,j,k;
    i=j=k=0;
    while(i<m || j<n) {
        if(i>=m) {
            c[k++]=b[j++];
        }
        else if(j>=n) {
            c[k++]=a[i++];
        }
        else if(a[i]<=b[j]) {
            c[k++]=a[i++];
        }
        else {
            c[k++]=b[j++];
        }
    }
    return c;
}

int main() {
    int m,n;
    cin>>m>>n;
    vi a;
    vi b;
    vi c;
    initialize(a,m);
    initialize(b,n);
    print(a,m);
    print(b,n);
    c=solve(a,b,m,n);
    print(c,m+n);
    return 0;
}