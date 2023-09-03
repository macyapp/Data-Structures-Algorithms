#include<iostream>
// #include<string>
using namespace std;

void solve() {
    string str="geeksforgeeks";
    cout<<str<<endl;
    cout<<str.length()<<endl;
    str+="xyz";
    cout<<str<<endl;
    cout<<str.substr(2,4)<<endl;
    cout<<str.find("eek")<<endl;
}

int main() {
    solve();
    return 0;
}