#include<iostream>
#include<vector>
#include<algorithm>
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
    int i,j,x,y;
    int cur,max=a[0];
    for(i=0;i<n;i++) {
        cur=0;
        for(j=i;j<n;j++) {
            cur+=a[j];
            if(cur>max) {
                max=cur;
                x=i;
                y=j;
            }
        }
    }
    cout<<"Max Subarray Sum = "<<max<<"\n";
    cout<<"Subarray:\n";
    print(a,x,y+1);
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