// Finding number of ways in a 'm x n' matrix
#include<iostream>
using namespace std;

int paths(int m, int n) {
    if(m==1||n==1)
        return 1;
    return paths(m-1,n)+paths(m,n-1);
}

int main() {
    int m,n;
    cin>>m>>n;
    cout<<paths(m,n)<<"\n";
    return 0;
}