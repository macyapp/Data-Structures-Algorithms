#include<iostream>
// #include<string>
using namespace std;

void solve() {
    string str="geeksforgeeks";
    for(int i=0; i<str.length(); i++) {
        cout<<str[i];
    }
    cout<<endl;
    for(const char &c: str) {
        cout<<c;
    }
    cout<<endl;
}

int main() {
    solve();
    return 0;
}