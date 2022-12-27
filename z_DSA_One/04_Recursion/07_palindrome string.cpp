#include<iostream>
using namespace std;

/*
 * To avoid string copies we're passing the string as reference
 * And in turn it optimises the code
 */

bool isPal(string &str,int l,int r) {
    if(l>=r)
        return true;
    
    return((str[l]==str[r])&&isPal(str,l+1,r-1));
}

int main() {
    string s="GeekskeeG";
    cout<<boolalpha<<isPal(s,0,s.length()-1)<<"\n";
    return 0;
}