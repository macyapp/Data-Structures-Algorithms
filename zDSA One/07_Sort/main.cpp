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

void print(vector<int> a) {
    int i,n=a.size();
    for(i=0;i<n;i++) {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}

int partition(vector<int>& a,int start,int end) {
    int pivot=a[end];
    int pIndex=start;
    int i;
    for(i=start;i<end;i++) {
        if(a[i]<=pivot) {
            print(a);
            swap(a[i],a[pIndex]);
            pIndex++;
        }
    }
    swap(a[pIndex],a[end]);
    return pIndex;
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
    #ifndef ONLINE_JUDGE
    freopen("ip.txt","r",stdin);
    #endif
    int n;
    vector<int> a;
    cin>>n;
    initialize(a,n);
    print(a);
    solve(a,n);
    print(a);
    return 0;
}