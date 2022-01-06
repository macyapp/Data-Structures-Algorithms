#include<iostream>
#include<cmath>
using namespace std;
typedef long long ll;

bool isSparse(int n) {
    if(n&(n>>1))
        return false;
    return true;
}

int main() {
    int n;
    cin>>n;
    cout<<boolalpha<<isSparse(n)<<endl;
    return 0;
}