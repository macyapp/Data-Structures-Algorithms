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


void binarySearch(vector<int>& a,int l,int h,int t) {
    int m,idx;
    idx=-1;
    while(l<=h) {
        m=(l+h)/2;
        if(a[m]<t) {
            l=m+1;
        }
        else if(a[m]>t) {
            h=m-1;
        }
        else {
            idx=m;
            break;
        }
    }
    if(idx!=-1)
        cout<<"Element present at index: "<<idx<<endl;
    else
        cout<<"Element not present\n";
}

void solve(vector<int>& a,int t) {
    int l,h;
    l=0,h=1;
    while(a[h]<t) {
        l=h;
        h=2*h;
    }
    binarySearch(a,l,h,t);
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
    solve(a,t);
    return 0;
}