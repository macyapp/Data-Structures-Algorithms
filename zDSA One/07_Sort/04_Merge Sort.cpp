#include<iostream>
#include<vector>
using namespace std;

void initialize(vector<int>& a,int n) {
    int i,input;
    for(i=0;i<n;i++) {
        cin>>input;
        a.push_back(input);
    }
}

void print(vector<int> a,int n) {
    int i;
    for(i=0;i<n;i++) {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}

void merge(vector<int>& a, int start,int mid,int end) {
    int i,k,p,q;
    vector<int> temp(end-start+1,0);
    k=0,p=start,q=mid+1;
    for(i=start;i<=end;i++) {
        if(p>mid) {                 // checks if first part comes to an end or not
            temp[k++]=a[q]++;
        }
        else if(q>end) {            // checks if second part has come to an end or not
            temp[k++]=a[p++];
        }
        else if(a[p]<a[q]) {        // checks which part has smaller element
            temp[k++]=a[p++];
        }
        else {
            temp[k++]=a[q++];
        }
    }
    // Copying sorted temp array into actual array
    for(i=0;i<k;i++,start++) {
        a[start]=temp[i];
    }
}

void mergeSort(vector<int>& a, int start,int end) {
    int mid;
    if(start<end) {
        mid=(start+end)/2;
        mergeSort(a,start,mid);
        mergeSort(a,mid+1,end);
        merge(a,start,mid,end);
    }
}

void solve(vector<int>& a, int n) {
    mergeSort(a,0,n-1);
}

int main() {
    freopen("ip.txt","r",stdin);
    int n;
    cin>>n;
    vector<int> a;
    initialize(a,n);
    print(a,n);
    solve(a,n);
    print(a,n);
    return 0;
}