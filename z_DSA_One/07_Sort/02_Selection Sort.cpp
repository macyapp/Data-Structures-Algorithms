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
    int i,j,min;
    for(i=0;i<n-1;i++) {
        min=i;              // Assuming current element is the min
        for(j=i+1;j<n;j++) {
            min=(a[j]<a[min])?j:min;
        }
        swap(a[i],a[min]);
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