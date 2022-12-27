#include<iostream>
#include<vector>
#include<algorithm>
#include <climits>
using namespace std;

void initialize(vector<int>& a,int n) {
    int i,input;
    for(i=0;i<n;i++) {
        cin>>input;
        a.push_back(input);
    }
}

void print(vector<int> a,int x,int y) {
    int i;
    for(i=x;i<y;i++) {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}

void solve(vector<int>& a, int n) {
    int i,j,min,water=0;
    int l_max,r_max;
    for(i=0;i<n;i++) {
        l_max=0,r_max=0;
        for(j=i;j>=0;j--) {
            l_max=(a[j]>l_max)?a[j]:l_max;
        }
        for(j=i;j<n;j++) {
            r_max=(a[j]>r_max)?a[j]:r_max;
        }
        min=(l_max<r_max)?l_max:r_max;
        water+=min-a[i];
    }
    cout<<"Total Trapped = "<<water<<"\n";
}

int main() {
    freopen("ip.txt","r",stdin);
    int n;
    cin>>n;
    vector<int> a;
    initialize(a,n);
    print(a,0,n);
    solve(a,n);
    return 0;
}