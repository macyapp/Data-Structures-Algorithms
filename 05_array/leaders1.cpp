#include <iostream>
using namespace std;

void leaders(int a[], int n) {
    int i,j;
    bool lead;
    cout<<"Leaders are:\n";
    for(i=0;i<n;i++) {
        lead=true;
        for(j=i+1;j<n;j++) {
            if(a[i]<=a[j]) {
                lead=false;
                break;
            }
        }
        if(lead) {
            cout<<a[i]<<' ';
        }
    }
    cout<<'\n';
}

void printarray(int a[], int n) {
    for (int i=0;i<n;i++) {
        cout<<a[i]<<' ';
    }
    cout<<'\n';
}

int main() {
    int ar[]={15,7,8,9,0,3},d;
    int size=sizeof(ar)/sizeof(ar[0]);
    cout<<"Array before rotation:\n";
    printarray(ar,size);
    leaders(ar, size);
    //cout<<"Array after rotation:\n";
    //printarray(ar,size);
    return 0;
}
