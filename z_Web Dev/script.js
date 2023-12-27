class Solution {
    maxSubArrayLength(nums) {
        let n = nums.length;
        let curSubarrayMax = 0, maxSum = 0;
        let maxLength = 0, curLength = 0;
        let maxElement = nums[0];
        let maxElementLength = 0;

        for(let i = 0; i < n; i++) {
            curSubarrayMax += nums[i];
            if(curSubarrayMax < 0) {
                curSubarrayMax = 0;
                curLength = 0;
            } else {
                curLength++;
                if(curSubarrayMax > maxSum) {
                    maxSum = curSubarrayMax;
                    maxLength = curLength;
                }
            }

            if(nums[i] >= maxElement) {
                maxElement = nums[i];
                maxElementLength = 1;
            }
        }

        return maxSum === 0 ? [maxElement, maxElementLength] : [maxSum, maxLength];
    }
}

// Test the function
const solution = new Solution();
const n = parseInt(prompt("Enter the number of elements in the array: "));
const nums = [];
for(let i = 0; i < n; i++) {
    nums.push(parseInt(prompt("Enter an integer:")));
}
const result = solution.maxSubArrayLength(nums);
console.log("Maximum subarray sum:", result[0]);
console.log("Maximum subarray length:", result[1]);