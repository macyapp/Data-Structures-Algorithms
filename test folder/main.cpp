#include<iostream>
#include<unordered_set>
using namespace std;
#define endl "\n"
#define sop cout<<"\n"

int main() {
    unordered_set<int> s;
    s.insert(5);
    s.insert(10);
    if(s.find(5)==s.end()) {
        cout<<"Not found"<<endl;
    }
    else {
        cout<<"Found"<<endl;
    }
    for(auto i=s.begin();i!=s.end();i++) {
        cout<<*i<<" ";
    }
    sop;
    s.clear();
    cout<<s.size()<<endl;
    return 0;
}