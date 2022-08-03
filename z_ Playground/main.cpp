#include<iostream>
#include<list>
#include<iterator>
using namespace std;
#define endl "\n"
#define pb push_back

class Hash {
public:
    int BUCKET;
    list<int> *table;

    Hash(int b) {
        this->BUCKET=b;
        table=new list<int>[BUCKET];
    }

    int hashFunc(int x) {
        return (x%BUCKET);
    }

    void insert(int key) {
        int idx=hashFunc(key);
        table[idx].pb(key);
    }

    void deleteEl(int key) {
        int idx=hashFunc(key);
        
    }
};

void solve() {

}

int main() {
    solve();
    return 0;
}