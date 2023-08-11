#include <iostream>
#include <vector>
using namespace std;

long long mergeAndCount(vector<int>& a, int low, int mid, int high) {
    vector<int> tmp(high - low + 1);
    int i, j, k;
    long long inversions = 0;
    i = low, j = mid + 1, k = 0;

    while (i <= mid || j <= high) {
        if(i<=mid && (j>high || a[i]<=a[j])) {
            tmp[k++] = a[i++];
        }
        else {
            tmp[k++] = a[j++];
            inversions += mid - i + 1;  // Count inversions
        }
    }

    for (i = 0; i < k;) {
        a[low++] = tmp[i++];
    }

    return inversions;
}

long long mergeSortAndCount(vector<int>& a, int low, int high) {
    long long inversions = 0;
    if (low < high) {
        int mid = low + (high - low) / 2;
        inversions += mergeSortAndCount(a, low, mid);
        inversions += mergeSortAndCount(a, mid + 1, high);
        inversions += mergeAndCount(a, low, mid, high);
    }
    return inversions;
}

long long countInversions(vector<int>& a) {
    return mergeSortAndCount(a, 0, a.size() - 1);
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    long long inversions = countInversions(a);
    cout << "Number of inversions: " << inversions << endl;
    return 0;
}