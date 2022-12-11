#include<iostream>
#include<algorithm>
using namespace std;
#define countOf(a) (sizeof(a)/sizeof(a[0]))

int main() {
    int a[]={10,15,5,20,8};
    int n=countOf(a);
    sort(a,a+n);        // Sort algorithm
    // Address of first element and address just after the last element
    for(int i=0;i<n;i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    if(binary_search(a,a+n,8))      // Binary Search algorithm
        cout<<"Present\n";
    else
        cout<<"Not present\n";
    return 0;   
}