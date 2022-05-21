#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    int t,n,s,i,max;
    cin>>t;
    while(t--) {
        cin>>n>>s;
        max=0;
        for(i=0;i<=n;i++) {
            if(abs(i-(s-i))>max) {
                max=abs(i-(s-i));
            }
        }
        cout<<max<<"\n";
    }
    return 0;
}