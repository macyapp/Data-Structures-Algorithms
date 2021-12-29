#include<iostream>
using namespace std;

void printarray(int a[], int n) {
    for (int i=0;i<n;i++) {
        cout<<a[i]<<' ';
    }
    cout<<'\n';
}

int findOdd(int a[], int n) {
    int i,j,count,odd;
    for(i=0;i<n;i++) {
        count=0;
        for(j=0;j<n;j++) {
            if(a[j]==a[i])
                count++;
        }
        if(count%2!=0) {
            odd=a[i];
            break;
        }
    }
    return odd;
}

int main() {
    int arr[]={4, 3, 4, 4, 4, 5, 5, 3, 3};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Array:\n";
    printarray(arr,size);
    cout<<"Element of odd occurence: "<<findOdd(arr,size)<<'\n';
    return 0;
}
