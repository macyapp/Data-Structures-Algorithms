#include<iostream>
using namespace std;

bool strpal(string &s,int start,int end) {
    if(start>=end)
        return true;
    return (s[start]==s[end])&&strpal(s,start+1,end-1);
}

int main() {
    string str;
    cin>>str;

    if(strpal(str,0,str.length()-1)) {
        cout<<"Palindrome\n";
    }
    else {
        cout<<"Not Palindrome\n";
    }
    return 0;
}