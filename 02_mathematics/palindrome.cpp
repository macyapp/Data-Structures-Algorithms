#include <iostream>
using namespace std;

bool isPal(int n) {
    int temp=n,res=0;
    for(;temp!=0;temp/=10) {
        res=res*10+temp%10;
    }
    return res==n;
}

int main() {
    int num;
    cin>>num;
    	
    if(isPal(num)) {
        cout<<"True\n";
    }
    else {
        cout<<"False\n";
    }
    return 0;
}
