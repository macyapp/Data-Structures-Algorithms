#include<iostream>
#include<vector>
using namespace std;
#define endl "\n"

class Hash {
    int n;
    vector<int> v;
public:
    Hash(int n) {
        v=vector<int>(n);
        this->n=n;
    }
    int hashFunc(int x) {
        return x%n;
    }
    void insert(int x) {
        int idx=hashFunc(x);
        int h=1;
        while(v[idx]!=0) {
            idx=(idx+h*h)%n;
            h++;
        }
        v[idx]=x;
    }
    void search(int x) {
        int idx=hashFunc(x);
        int h=1;
        while(v[idx]!=x && v[idx]!=0) {
            idx=(idx+h*h)%n;
            h++;
        }
        if(v[idx]==x) {
            cout<<x<<" is found!"<<endl;
        }
        else {
            cout<<x<<" is not found!"<<endl;
        }
    }
    
    void displayHash() {
        int i,j;
        for(i=0;i<v.size();i++) {
            cout<<i;
            if(v[i]!=0) {
                cout<<" -> "<<v[i]<<endl;
            }
        }
    }
};

int main() {
    freopen("ip.txt","r",stdin);
    int i,tmp,n;
    cin>>n;
    Hash ob(n);
    for(i=0;i<n;i++) {
        cin>>tmp;
        ob.insert(tmp);
    }
    ob.displayHash();

    ob.search(12);
    return 0;
}