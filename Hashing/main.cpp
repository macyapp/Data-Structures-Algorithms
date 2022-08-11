#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
#define endl "\n"
#define um unordered_map
#define fp first
#define sp second

void solve() {
    um<string,int> m;
    m["gfg"]=20;
    m["ide"]=30;
    m.insert({"courses",15});
    cout<<m.size()<<endl;
    m.erase("ide");
    m.erase(m.begin(),m.end());
    cout<<m.size()<<endl;
}

int main() {
    // #ifndef ONLINE_JUDGE
    //     freopen("ip.txt","r",stdin);
    // #endif
    solve();
    return 0;
}