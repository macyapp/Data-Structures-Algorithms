#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int kadaneAlgorithm(int array[], int size) {
  int currentSum = 0;
  int maxSoFar = INT_MIN;
  int allNegativeSum = array[0];

  for (int i = 0; i < size; i++) {
    currentSum += array[i];
    if (currentSum < 0) {
      currentSum = 0;
    }
    maxSoFar = max(currentSum, maxSoFar);
    allNegativeSum = min(allNegativeSum, array[i]);
  }

  if (allNegativeSum == 0) {
    return maxSoFar;
  }
  else {
    return allNegativeSum;
  }
}

int main() {
  int array[] = {-2, -3, 4, -1, -2, 1, 5, -3};
  int size = sizeof(array) / sizeof(array[0]);

  int maxSum = kadaneAlgorithm(array, size);

  cout << "The maximum sum of a contiguous subarray is: " << maxSum << endl;

  return 0;
}
