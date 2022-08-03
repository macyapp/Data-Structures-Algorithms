#include<iostream>
#include<vector>
#include<string>
using namespace std;
#define endl "\n"
#define pb push_back

vector<string> hashTable[20];
int hashTableSize=20;

int hashFunc(string s) {
    
}

void insert(string s) {
    int idx=hashFunc(s);
    hashTable[idx].pb(s);
}

void search(string s) {
    int idx=hashFunc(s);
    int i;
    for(i=0;i<hashTable[idx].size();i++) {
        if(hashTable[idx][i]==s) {
            cout<<s<<" is found!"<<endl;
            return;
        }
    }
    cout<<s<<" is not found!"<<endl;
}

void solve() {

}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("ip.txt","r",stdin);
    #endif
    solve();
    return 0;
}