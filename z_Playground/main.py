def maximum_sum_subarray(k, a) -> int:
    cur_sum = 0
    max_sum = float('-inf')  # Negative infinity to handle all negative numbers
    n = len(a)

    for i in range(n):
        if i < k:
            cur_sum += a[i]
            if i == k - 1:
                max_sum = cur_sum
        else:
            cur_sum += a[i] - a[i - k]
            max_sum = max(cur_sum, max_sum)

    return max_sum

# Test the function
a = [1, 2, 3, 4, 5]
k = 3
print("Maximum sum of a subarray of size", k, "is", maximum_sum_subarray(k, a))
