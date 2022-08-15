#include<iostream>
#include<vector>
using namespace std;

void initialize(vector<int>& a,int n) {
	int i;
	for(i=0;i<n;i++) {
		cin>>a[i];
	}
}

int main() {
	int n;
	cin>>n;
	vector<int> a(n);
	
	return 0;
}