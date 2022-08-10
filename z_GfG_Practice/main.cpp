// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    // Function to count number of Ones
    // arr: input array 
    // N: size of input array
    int countOnes(int a[], int n) {
        int l,h,m;
        l=0;
        h=n-1;
        while(l<=h) {
            m=(l+h)/2;
            if(a[m]<1) {
                h=m-1;
            }
            else if(a[m]>1) {
                l=m+1;
            }
            else {
                if(m==n-1 || a[m+1]!=1) {
                    return m+1;
                }
                else {
                    l=m+1;
                }
            }
        }
        return -1;
    }
};

// { Driver Code Starts.

int main()
{
#ifndef ONLINE_JUDGE
freopen("ip.txt","r",stdin);
#endif
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        int *arr = new int[n]; 
        for(int i = 0; i < n; i++)
            cin>>arr[i];
            
        Solution ob;
        cout <<ob.countOnes(arr, n)<<endl;
    }
    return 0;
}  // } Driver Code Ends