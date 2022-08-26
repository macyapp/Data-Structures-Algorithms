#include<iostream>
#include<vector>
using namespace std;
#define endl "\n"

int main() {
    int x = 10, z = 20;
    int &y = x;
    y = z;
    y = y+5;
    cout << x << " " << y << " " << z << endl;
    return 0;
}