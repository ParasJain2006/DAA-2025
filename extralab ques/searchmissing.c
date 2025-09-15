#include <stdio.h>

int missingNumber(int arr[], int n) {
    int low = 0, high = n - 1, mid;

    while (low <= high) {
        mid = (low + high) / 2;

        // If index matches value, missing is on right
        if (arr[mid] == mid) {
            low = mid + 1;
        } 
        else {
            // If mismatch occurs, missing is on left
            high = mid - 1;
        }
    }
    return low;  // 'low' will be at missing number
}

int main() {
    int arr[] = {0, 1, 2, 3, 5, 6, 7}; // 4 is missing
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Missing number is: %d\n", missingNumber(arr, n));
    return 0;
}
