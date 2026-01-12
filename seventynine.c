#include <stdio.h>

int maxSumSubarray(int arr[], int n, int k) {
    int windowSum = 0, maxSum = 0;

    for (int i = 0; i < k; i++) {
        windowSum += arr[i];
    }

    maxSum = windowSum;

    for (int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k];
        if (windowSum > maxSum)
            maxSum = windowSum;
    }

    return maxSum;
}

int main() {
    int arr[] = {2, 1, 5, 1, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    printf("Maximum sum of subarray size %d = %d\n", k, maxSumSubarray(arr, n, k));

    return 0;
}
