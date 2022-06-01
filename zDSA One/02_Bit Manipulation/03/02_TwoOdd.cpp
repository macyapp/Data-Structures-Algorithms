#include<iostream>
using namespace std;

int main() {
    int a[]={5,4,1,4,3,5,1,2};
    int n=sizeof(a)/sizeof(a[0]);
    int i, res=0, r_set_bit;
    int x=0,y=0;
    for(i=0;i<n;i++) {
        res=res^a[i];
    }
    r_set_bit=res& ~(res-1);   // Gives the number with rightmost set bit
    for(i=0;i<n;i++) {
        if(a[i]&r_set_bit) {
            x^=a[i];
        }
        else {
            y^=a[i];
        }
    }
    cout<<x<<" "<<y<<"\n";
    return 0;
}