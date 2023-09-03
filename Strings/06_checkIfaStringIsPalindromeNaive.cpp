#include<iostream>
#include<algorithm>
using namespace std;

void solve() {
    string str;
    cin>>str;
    string rev=str;
    reverse(rev.begin(),rev.end());
    cout<<boolalpha<<(rev==str)<<endl;
}

int main() {
    solve();
    return 0;
}