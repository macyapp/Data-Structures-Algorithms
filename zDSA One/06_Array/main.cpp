#include<iostream>
#include<vector>
using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    vector<int> v;
    
    // Adding elements to vector
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    // Printing vector
    for(int i=0;i<v.size();i++) {
        cout<<v[i]<<" ";
    }
    cout<<"\n";

    vector<int>::iterator i;
    for(i=v.begin();i!=v.end();i++) {
        cout<<*i<<" ";
    }
    cout<<"\n";

    for(auto i: v) {
        cout<<i<<" ";
    }
    cout<<"\n";

    // Deleting last element
    v.pop_back();
    for(auto i: v) {
        cout<<i<<" ";
    }
    cout<<"\n\n";

    // Second vector
    vector<int> v2(3,50);
    for(auto i: v2) {
        cout<<i<<" ";
    }
    cout<<"\n\n";

    // Swapping vectors
    swap(v,v2);
    for(auto i: v) {
        cout<<i<<" ";
    }
    cout<<"\n";
    for(auto i: v2) {
        cout<<i<<" ";
    }
    cout<<"\n";
    return 0;
}