#include<iostream>
#include<vector>
using namespace std;

void print(int n) {
    if(n<1) {
        return;
    }
    print(n-1);
    cout<<n<<" ";
}

int main() {
    print(9);
    cout<<endl;
    return 0;   
}