#include<iostream>
using namespace std;

int fun(int n, int sum) {
    if (n<1)
        return 0;
    return fun(n-1,sum);
    return fun(n-3,sum);
    return sum+1;
}

void solve() {
    cout<<fun(5,0)<<endl;
}

int main() {
    solve();
    return 0;
}