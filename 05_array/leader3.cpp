#include <iostream>
using namespace std;

void reverse(int a[], int l, int h) {
    int temp;
    for(;l<h;l++,h--) {
        temp=a[l];
        a[l]=a[h];
        a[h]=temp;
    }
}

void printarray(int a[], int n) {
    for (int i=0;i<n;i++) {
        cout<<a[i]<<' ';
    }
    cout<<'\n';
}

void leaders(int a[], int n) {
    int i,cur_lead,lead[n],res=0;
    cur_lead=a[n-1];
    //cout<<cur_lead<<' ';
    lead[0]=cur_lead;
    for(i=n-2;i>=0;i--) {
        if(a[i]>cur_lead) {
            cur_lead=a[i];
            //cout<<cur_lead<<' ';
            res++;
            lead[res]=cur_lead;
        }
    }
    reverse(lead,0,res);
    printarray(lead,res+1);
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
