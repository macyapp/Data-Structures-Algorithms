#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;

void initialize(vector<ll>& a, int n) {
    int i;
    for(i=0;i<n;i++) {
        cin>>a[i];
    }
}

int main() {
    freopen("input.txt","r",stdin);
    int t,n,i,j,odd,even,count;
    ll sum_a;
    cin>>t;
    while(t--) {
        cin>>n;
        vector<ll> a(2*n,0);
        odd=0;
        even=0;
        count=0;
        for(i=0;i<2*n;i++) {
            if(a[i]&1)
                odd++;
            else
                even++;
        }
        if(odd==even) {
            cout<<"0\n";
            return 0;
        }
        for(i=0;i<2*n;i++) {
            if(a[i]&1) {
                a[i]*=2;
            }
            else {
                a[i]/=2;
                if(a[i]&1) {
                    odd++;
                    even--;
                }
            }
            count++;
        }
        cout<<count/2<<"\n";
    }
    return 0;
}