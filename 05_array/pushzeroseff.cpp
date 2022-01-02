#include <iostream>
using namespace std;

void pushzeros(int a[], int *n) {
    int i,count=0,temp;
    for(i=0;i<*n;i++) {
        if(a[i]!=0) {
            temp=a[i];
            a[i]=a[count];
            a[count]=temp;
            count++;
        }
    }
}

void printarray(int a[], int n) {
    for (int i=0;i<n;i++) {
        cout<<a[i]<<' ';
    }
    cout<<'\n';
}

int main() {
    int ar[]={1,0,2,0,3,0,4,5,6,7,8,9,0,10,0,0};
    int size=sizeof(ar)/sizeof(ar[0]);
    cout<<"Array before:\n";
    printarray(ar,size);
    pushzeros(ar, &size);
    cout<<"Array after:\n";
    printarray(ar,size);
    return 0;
}
