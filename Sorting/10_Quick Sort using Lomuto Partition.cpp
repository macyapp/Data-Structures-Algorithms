#include<iostream>
#include<vector>
using namespace std;
#define endl "\n"
#define v vector

void initialize(v<int>& a,int n) {
    int i;
    for(i=0;i<n;i++) {
        cin>>a[i];
    }
}

void print(v<int>& a,int n) {
    int i;
    for(i=0;i<n;i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int partition(v<int>& a,int low,int high) {
    int piv=a[high];
    int i,j;
    i=low-1;
    for(j=low;j<high;j++) {
        if(a[j]<=piv) {
            i++;
            swap(a[j],a[i]);
        }
    }
    i++;
    swap(a[i],a[high]);
    return i;
}

void quickSort(v<int>& a,int low,int high) {
    int piv;
    if(low<high) {
        piv=partition(a,low,high);
        quickSort(a,low,piv-1);
        quickSort(a,piv+1,high);
    }
}

void solve(v<int>& a,int n) {
    quickSort(a,0,n-1);
}

int main() {
    int n;
    cin>>n;
    v<int> a(n);
    initialize(a,n);
    print(a,n);
    solve(a,n);
    print(a,n);
    return 0;
}