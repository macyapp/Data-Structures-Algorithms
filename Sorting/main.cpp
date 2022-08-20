#include<iostream>
#include<vector>
using namespace std;

void initialize(vector<int>& a,int n) {
    int i;
    for(i=0;i<n;i++) {
        cin>>a[i];
    }
}

void print(vector<int> a) {
    int i,n=a.size();
    for(i=0;i<n;i++) {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}

int partition(vector<int>& a,int start,int end) {
    int pivot=a[end];       // Pick the rightmost element as a pivot from the array
    int pidx=start;
    int i;
    for(i=start;i<end;i++) {
        if(a[i]<=pivot) {
            swap(a[i],a[pidx]);
            pidx++;
        }
    }
    print(a);
    swap(a[pidx],a[end]);
    return pidx;
}

void quickSort(vector<int>& a,int start,int end) {
    int pivot;
    if(start<end) {
        pivot=partition(a,start,end);
        quickSort(a,start,pivot-1);
        quickSort(a,pivot+1,end);
    }
}

void solve(vector<int>& a,int n) {
    quickSort(a,0,n-1);
}

int main() {
    int n;
    vector<int> a(n);
    cin>>n;
    initialize(a,n);
    print(a);
    solve(a,n);
    print(a);
    return 0;
}