#include <stdio.h>

int main() {
    int arr[5] = {1, 4, 3, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n - 1; i++) {
        int swap = 0; // move here, so it tracks for the whole pass

        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swap = 1;
            }
        }

        if (swap == 0) break; // No swaps → already sorted
    }

    for (int x = 0; x < n; x++) {
        printf("%d ", arr[x]);
    }

    return 0;
}
