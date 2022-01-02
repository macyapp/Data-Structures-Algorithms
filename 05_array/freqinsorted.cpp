#include <iostream>
using namespace std;

void printarray(int a[], int n) {
    for (int i=0;i<n;i++) {
        cout<<a[i]<<' ';
    }
    cout<<'\n';
}

void freqinsorted(int a[], int n) {
    int freq, i;
    i=0; freq=0;
    while(i<n) {
        while((i<n)&&((i+1)<n)&&(a[i]==a[i+1])) {
            i++;
            freq++;
        }
        freq++;
        cout<<a[i]<<' '<<freq<<'\n';
        i++;
        freq=0;
    }
}

int main() {
    int ar[]={1};
    int size=sizeof(ar)/sizeof(ar[0]);
    cout<<"Array:\n";
    printarray(ar,size);
    cout<<"Elements with their frequency\n";
    freqinsorted(ar, size);
    return 0;
}
