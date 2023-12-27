#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    pair<int, int> maxSubArrayLength(vector<int>& nums) {
        int n = nums.size();
        int curSubarrayMax = 0, maxSum = 0;     // Initialize maxSum as 0
        int maxLength = 0, curLength = 0;
        int maxElement = nums[0];               // To handle all negative numbers

        for(int i = 0; i < n; i++) {
            curSubarrayMax += nums[i];
            if(curSubarrayMax < 0) {
                curSubarrayMax = 0;             // Reset if sum becomes negative
                curLength = 0;                  // Reset current length as well
            }
            else {
                curLength++;                    // Increment length only if the sum is positive
                if(curSubarrayMax > maxSum) {
                    maxSum = curSubarrayMax;    // Update maxSum and maxLength
                    maxLength = curLength;
                }
            }

            // Update maxElement if nums[i] is greater than maxElement
            maxElement = max(nums[i],maxElement);
        }

        // If maxSum is still 0, it means all numbers are negative.
        // So, return the maximum element (which is the least negative number) and its length.
        return (maxSum==0)?make_pair(maxElement, 1):make_pair(maxSum, maxLength);
    }
};

int main() {
    Solution solution;
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n; // Get the number of elements from the user

    vector<int> nums(n);    // Create a vector with n elements

    cout << "Enter " << n << " integers:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> nums[i];     // Read each integer from the user
    }

    pair<int, int> result = solution.maxSubArrayLength(nums);
    cout << "Maximum subarray sum: " << result.first << endl;       // Print the maximum sum
    cout << "Maximum subarray length: " << result.second << endl;   // Print the maximum length
    return 0;
}