// { Driver Code Starts
// A Sample C++ program for beginners with Competitive Programming

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
  public:
    
    // A[]: input array
    // N: input array
    //Function to sort the binary array.
    void binSort(int a[], int n) {
        int zeroptr=0;
        int i;
        for(i=0;i<n;i++) {
            if(a[i]==0) {
                swap(a[i],a[zeroptr]);
                zeroptr++;
            }
        }
    }
};

// { Driver Code Starts.
int main() {
#ifndef ONLINE_JUDGE
freopen("ip.txt","r",stdin);
#endif
	int T;
	cin>>T;
	// Input the number of testcases
	while(T--)
	{
	    int N;
	    cin>>N; //Input size of array N
	    int A[N]; 
	    
	    for(int i = 0; i  < N; i++)
	      cin>>A[i];
	      
	    Solution obj;
	    obj.binSort(A,N);
	    
	    for(int x:A)
	    cout<<x<<" ";
	      
	    cout<<endl;
	}
	return 0;
}



  // } Driver Code Ends