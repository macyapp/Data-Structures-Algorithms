#include<iostream>
#include<vector>
using namespace std;

void initialize(vector<int>& a, int n) {
    int i, input;
    for (i = 0; i < n; i++) {
        cin >> input;
        a.push_back(input);
    }
}

void print(vector<int>& a, int n) {
    int i;
    for (i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << "\n";
}

void bubbleSortCompare(vector<int>& a, int j, int n, bool& swapped) {
    if (j < n) {
        if (a[j] > a[j + 1]) {
            swap(a[j], a[j + 1]);
            swapped = true;
        }
        bubbleSortCompare(a, j + 1, n, swapped);
    }
}

void bubbleSortPass(vector<int>& a, int n, bool swapped) {
    if (n > 1 && swapped) {
        swapped = false;
        bubbleSortCompare(a, 0, n - 1, swapped);
        bubbleSortPass(a, n - 1, swapped);
    }
}

void solve(vector<int>& a, int n) {
    bool swapped;
    bubbleSortPass(a, n, swapped);
}

int main() {
    int n;
    cin >> n;
    vector<int> a;
    initialize(a, n);
    cout << "Original Array: ";
    print(a, n);

    solve(a, n);

    cout << "Sorted Array: ";
    print(a, n);
    return 0;
}
