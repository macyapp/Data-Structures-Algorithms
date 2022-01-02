/*There is rope of length 'n'
What is the max no. of pieces such that
every piece has lenght a, b or c?
*/
#include<iostream>
using namespace std;

int maxCuts(int n, int a, int b, int c) {
    int res;
    if(n==0)
        return 0;
    if(n<=-1)
        return -1;
    res=max(maxCuts(n-a,a,b,c),max(maxCuts(n-b,a,b,c),maxCuts(n-c,a,b,c)));

    if(res==-1)
        return -1;
    
    return res+1;
}

int main() {
    int n=5,a=1,b=2,c=5;

    if(maxCuts(n,a,b,c)==-1) {
        cout<<"Rope cannot be cut.\n";
    }
    else {
        cout<<maxCuts(n,a,b,c)<<'\n'; //Output: 5 (for given inputs)
    }
    return 0;
}