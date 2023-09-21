#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() {
    int n, S;

    // Input the size of the array and the target sum
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &S);

    // Initialize pointers and current sum
    int left = 0, right = 0;
    int currentSum = 0;

    // Iterate through the array
    while (right < n) {
        // Add the element at the right pointer to the current sum
        currentSum += arr[right];

        // Check if current sum is greater than the target sum
        while (currentSum > S && left <= right) {
            // If it is, subtract elements from the left until current sum <= S
            currentSum -= arr[left];
            left++;
        }

        // Check if current sum equals the target sum
        if (currentSum == S) {
          
            printf("%d %d\n", left, right); 
            return 0;
        }

        // Move the right pointer to the next element
        right++;
    }

    // If no subarray with the target sum is found
    printf("-1\n");

    return 0;
}
