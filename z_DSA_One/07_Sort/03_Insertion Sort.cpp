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

void solve(vector<int>& a, int n) {
    int i,j;
    int temp;
    for(i=0;i<n;i++) {
        temp=a[i];                      // storing current element whose left side is checked for its correct position
        for(j=i;j>0&&temp<a[j-1];j--) { // check whether the adjacent element in left side is greater or less than the current element
            a[j]=a[j-1];                // moving the left side element to one position forward
        }
        a[j]=temp;                      // moving current element to its  correct position
    }
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