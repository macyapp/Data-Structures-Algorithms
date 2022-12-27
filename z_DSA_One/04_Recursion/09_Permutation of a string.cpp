#include<iostream>
using namespace std;

void permute(string s, int l, int r) {
    if (l == r) {
        cout<<s<<"\n";
        return;
    }
    else {
        // Permutations made
        for (int i = l; i <= r; i++) {
            // Swapping done
            swap(s[l], s[i]);
            // Recursion called
            permute(s, l+1, r);
            // Backtrack
            swap(s[l], s[i]);
        }
    }
}

int main() {
    string s = "abc";
    int n=s.length();
    permute(s,0,n-1);
    return 0;
}