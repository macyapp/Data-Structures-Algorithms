#include<iostream>
#include<vector>
using namespace std;

void solve() {
    vector<int> v={10,20,30,40,50};
    vector<int>::iterator it=v.begin();
    advance(it,3);
    // next() and prev returns an iterator
    // advance() modifies the same iterator
    cout<<*it<<endl;
}

int main() {
    solve();
    cout<<endl;
    return 0;
}