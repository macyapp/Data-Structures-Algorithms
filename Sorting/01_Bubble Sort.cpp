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

void print(vector<int>& a,int n) {
    int i;
    for(i=0;i<n;i++) {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}

void solve(vector<int>& a,int n) {
    int i,j;
    bool swapped;
    for(i=0;i<n-1;i++) {
        swapped=false;              // To check if array is already sorted
        for(j=0;j<n-i-1;j++) {
            if(a[j]>a[j+1]) {
                swap(a[j],a[j+1]);
                swapped=true;
            }
        }
        if(swapped==false)
            break;
    }
}

int main() {
    int n;
    cin>>n;
    vector<int> a;
    initialize(a,n);
    print(a,n);
    solve(a,n);
    print(a,n);
    return 0;
}