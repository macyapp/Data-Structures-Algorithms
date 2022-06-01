#include<iostream>
using namespace std;

int main() {
    int num,n,res=0;
    cin>>num;
    n=num;
    while(num) {
        res=res*10+num%10;
        num/=10;
    }
    if(res==n)
        cout<<"Palindrome\n";
    else
        cout<<"Not a Palindrome\n";
    return 0;
}