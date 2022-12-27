#include<iostream>
#include<vector>
using namespace std;
#define pb push_back
#define endl "\n"

void initialize(vector<int>& a,int n) {
    int i,ip;
    for(i=0;i<n;i++) {
        cin>>ip;
        a.pb(ip);
    }
}

void print(vector<int> a,int n) {
    int i;
    for(i=0;i<n;i++) {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}


void binarySearch(vector<int>& a,int n,int t) {
    int l,h,m,idx;
    l=0,h=n-1;
    idx=-1;
    while(l<=h) {
        m=(l+h)/2;
        if(a[m]==t) {
            idx=m;
            break;
        }
        if(a[l]<a[m]) {
            if(t>=a[l]&&t<a[m]) {
                h=m-1;
            }
            else {
                l=m+1;
            }
        }
        else {
            if(t>a[m]&&t<=a[h]) {
                l=m+1;
            }
            else {
                h=m-1;
            }
        }
    }
    if(idx!=-1) {
        cout<<"Element present at index: "<<idx<<endl;
    }
    else {
        cout<<"Element not present\n";
    }
}

void solve(vector<int>& a,int n,int t) {
    binarySearch(a,n,t);
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("ip.txt","r",stdin);
    #endif
    int n,t;
    cin>>n;
    vector<int> a;
    initialize(a,n);
    print(a,n);
    cin>>t;
    solve(a,n,t);
    return 0;
}