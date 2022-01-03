#include<iostream>
#include<vector>
#define c char
using namespace std;

vector<int> A;
vector<int> B;
vector<int> C;

void initialize(vector<int> &arr, int n) {
    int i;
    for(i=0;i<n;i++) {
        arr.push_back(n-i);
    }
}

void printVect(vector<int> &arr) {
    int i;
    int n=arr.size();
    cout<<'[';
    for(i=0;i<n;i++) {
        cout<<arr[i]<<' ';
    }
    cout<<']';
    cout<<'\n';
}

void printAllVect() {
    printVect(A);
    printVect(B);
    printVect(C);
}

void move(int n, vector<int> &source,vector<int> &target,
          vector<int> &auxiliary,c s, c t, c a) {
    if(n>0) {
        // Move n-1 disks from source to auxiliary, so they are out of the way
        move(n-1,source,auxiliary,target,s,a,t);

        // Move nth disk from source to target
        cout<<"Move "<<n<<" from "<<s<<" to "<<t<<'\n';
        target.push_back(source.back());
        source.pop_back();

        // Display the progress
        printAllVect();

        // Move n-1 disks that left on auxiliary onto target
        move(n-1,auxiliary,target,source,a,t,s);
    }
}

int main() {
    int n=3;
    initialize(A,n);
    printAllVect();
    move(n,A,C,B,'A','C','B');
}