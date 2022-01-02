#include <iostream>
using namespace std;

int largest(int a[], int n) {
    int x,i,idx;
    idx=0;
    x=a[0];
    for(i=0;i<n;i++) {
        if(a[i]>x) {
            x=a[i];
            idx=i;
        }
    }
    return idx;
}

int seclargest(int a[], int n) {
    int res,large,i;
    large=largest(a,n);
    res=-1;
    for(i=0;i<n;i++) {
        if(a[i]!=a[large]) {
            if(res==-1)
                res=i;
            else if(a[i]>a[res])
                res=i;
        }
    }
    return res;
}

int main() {
    int ar[]={10,5,20,8};
    int size=sizeof(ar)/sizeof(ar[0]);
    if(seclargest(ar,size)==-1)
        cout<<"Second largest does not exist\n";
    else
        cout<<"Second Largest element "<<ar[seclargest(ar,size)]<<" is present at "<<seclargest(ar,size)+1<<'\n';
    return 0;
}
