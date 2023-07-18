#include<iostream>
#include<vector>
using namespace std;
#define endl "\n"

class Hash {
    int n;
    vector<vector<int>> v;
public:
    Hash(int n) {
        v=vector<vector<int>>(n);
        this->n=n;
    }
    int hashFunc(int x) {
        return x%n;
    }
    void add(int x) {
        int idx=hashFunc(x);
        v[idx].push_back(x);
    }
    void del(int x) {
        int idx=hashFunc(x);
        int i,j;
        for(i=0;i<v[idx].size();i++) {
            if(v[idx][i]==x) {
                v[idx].erase(v[idx].begin()+i);
                cout<<x<<" deleted!"<<endl;
                return;
            }
        }
        cout<<"No Element Found!"<<endl;
    }
    void displayHash() {
        int i,j;
        for(i=0;i<v.size();i++) {
            cout<<i;
            for(j=0;j<v[i].size();j++) {
                cout<<" -> "<<v[i][j];
            }
            cout<<endl;
        }
    }
};

int main() {
    int i,tmp,n;
    cin>>n;
    Hash ob(n);
    for(i=0;i<n;i++) {
        cin>>tmp;
        ob.add(tmp);
    }
    cout<<"Initial Hash\n";
    ob.displayHash();
    cout<<"\nRemoving 23 from Hash: ";
    ob.del(23);
    cout<<endl;

    cout<<"Final Hash:\n";
    ob.displayHash();
    return 0;
}