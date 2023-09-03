#include<iostream>
// #include<string>
using namespace std;

void solve() {
    string str;
    cout<<"Enter your name:\n";
    // Stops reading an input from console as soon
    // as it encounters a space
    getline(cin,str,'K');
    // By default the function has '\n' as parameter
    // getline(cin,str,'\n')
    // We can make the reading stop at any character
    // For e.g. getline(cin,str,'K')
    // The input will stop before 'K'
    cout<<"Your name is "<<str<<endl;
}

int main() {
    solve();
    return 0;
}