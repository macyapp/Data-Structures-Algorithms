#include<iostream>
// #include<string>
using namespace std;

void solve() {
    string s1="abc";
    string s2="bcd";
    if(s1==s2)
        cout<<"Same"<<endl;
    else if(s1<s2)
        cout<<"Greater"<<endl;
    else
        cout<<"Lesser"<<endl;
}

int main() {
    solve();
    return 0;
}