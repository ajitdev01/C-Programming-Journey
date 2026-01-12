#include <stdio.h>

int hasPairWithSum(int arr[], int n, int target) {
    int left = 0, right = n - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target)
            return 1;
        else if (sum < target)
            left++;
        else
            right--;
    }
    return 0;
}

int main() {
    int arr[] = {1, 2, 4, 7, 11, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 15;

    if (hasPairWithSum(arr, n, target))
        printf("Pair found with sum %d\n", target);
    else
        printf("No pair found with sum %d\n", target);

    return 0;
}
