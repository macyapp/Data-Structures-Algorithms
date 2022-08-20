//{ Driver Code Starts
// C program for insertion sort
#include <stdio.h>
#include <math.h>

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution {
    public:
    void insert(int a[], int i) {
		//code here
		int j=i,tmp;
		tmp=a[i];
		while(j>0 && a[j-1]>tmp) {
			a[j]=a[j-1];
			j--;
		}
		a[j]=tmp;
    }
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int a[], int n) {
		//code here
		int i;
		for(i=0;i<n;i++) {
			insert(a,i);
		}
    }
};

//{ Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;

    scanf("%d",&T);

    while(T--){

    scanf("%d",&n);

    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.insertionSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}

// } Driver Code Ends