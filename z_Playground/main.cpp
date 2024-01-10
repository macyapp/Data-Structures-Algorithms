#include <iostream>
using namespace std;

// Function to find square root of given number up to given precision
double squareRoot(long long number, int precision) {
    long long start = 0, end = number;
    long long mid;
    double ans;

    // For computing integral part of square root of number
    while (start <= end) {
        mid = start + (end - start) / 2;
        if (mid * mid == number) {
            ans = mid;
            break;
        }

        if (mid <= number / mid) {
            start = mid + 1;
            ans = mid;
        }
        else {
            end = mid - 1;
        }
    }

    // For computing the fractional part of square root up to given precision
    double increment = 0.1;
    for (int i = 0; i < precision; i++) {
        while ((ans + increment) * (ans + increment) <= number) {
            ans += increment;
        }
        increment /= 10;
    }
    return ans;
}

int main() {
    cout.precision(10);
    cout << squareRoot(2, 8) << endl;
    cout << squareRoot(10, 4) << endl;

    return 0;
}
