#include<iostream>
// #include<string>
using namespace std;

void solve() {
    string str;
    cout<<"Enter your name:\n";
    // Stops reading an input from console as soon
    // as it encounters a space
    cin>>str;
    cout<<"Your name is "<<str<<endl;
}

int main() {
    solve();
    return 0;
}