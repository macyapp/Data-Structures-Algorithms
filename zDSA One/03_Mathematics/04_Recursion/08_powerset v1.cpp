#include<iostream>
using namespace std;

void superset(string s,string cur,int i) {
    if(i==s.length()) {
        cout<<cur<<" ";
        return;
    }
    superset(s,cur,i+1);
    superset(s,cur+s[i],i+1);
}

int main() {
    string s="abc";
    int length=s.length();
    superset(s,"",0);
    return 0;
}