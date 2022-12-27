#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool myCompare(pair<int,int> p1, pair<int,int> p2) {
    return p1.first<p2.first;
}

int main() {
    freopen("input.txt","r",stdin);
    // Reduce the given array
    vector<int> a={10,16,7,14,5,3,12,9};
    for(auto i:a) {
        cout<<i<<" ";
    }
    cout<<"\n";
    // Reduction
    vector<pair<int,int>> v;
    // for(int i=0;i<a.size();i++) {
    //     pair<int,int> p;
    //     p.first=a[i];
    //     p.second=i;
    //     v.push_back(p);
    // }

    for(int i=0;i<a.size();i++) {
        v.push_back(make_pair(a[i],i));
    }

    sort(v.begin(),v.end(),myCompare);

    for(int i=0;i<v.size();i++) {
        a[v[i].second]=i;
    }

    for(auto i:a) {
        cout<<i<<" ";
    }
    cout<<"\n";
    return 0;
}