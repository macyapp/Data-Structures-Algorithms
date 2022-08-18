//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int makeProductOne(int a[], int n) {
        // code here
		int i;
		int pos,neg,zer,step;
		pos=neg=zer=step=0;
		for(i=0;i<n;i++) {
			if(a[i]==0) {
				zer++;
			}
			else if(a[i]<0) {
				step+=(-1-a[i]);
				neg++;
			}
			else {
				step+=(a[i]-1);
				pos++;
			}
		}
		if(neg%2==0) {
			step+=zer;
		}
		else {
			if(zer>0) {
				step+=zer;
			}
			else {
				step+=2;
			}
		}
		return step;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution ob;
        cout << ob.makeProductOne(arr,N) << endl;
    }
    return 0;
}
// } Driver Code Ends