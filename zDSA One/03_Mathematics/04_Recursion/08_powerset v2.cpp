#include<iostream>
using namespace std;

void superset(string s,string cur,int i) {
    if(i==0) {
        cout<<cur<<" ";
        return;
    }
    superset(s,cur,i-1);
    superset(s,cur+s[i-1],i-1);
}

int main() {
    string s="abc";
    int length=s.length();
    superset(s,"",length);
    return 0;
}