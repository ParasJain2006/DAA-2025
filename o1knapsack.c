#include <stdio.h>

int main() {
    int n, W;
    printf("Enter number of items: ");
    scanf("%d", &n);
    printf("Enter maximum capacity of knapsack: ");
    scanf("%d", &W);

    int value[n], weight[n], used[n];
    for(int i=0; i<n; i++) {
        printf("Enter value of item %d: ", i+1);
        scanf("%d", &value[i]);
        printf("Enter weight of item %d: ", i+1);
        scanf("%d", &weight[i]);
        used[i] = 0; // mark item as not used
    }

    int totalWeight = 0, totalValue = 0;
    printf("Items selected: ");

    for(int count = 0; count < n; count++) {
        int maxValue = -1;
        int idx = -1;

        // find max value item not used yet
        for(int i=0; i<n; i++) {
            if(!used[i] && value[i] > maxValue) {
                maxValue = value[i];
                idx = i;
            }
        }

        if(idx == -1) break; // no more items left

        if(totalWeight + weight[idx] <= W) {
            totalWeight += weight[idx];
            totalValue += value[idx];
            used[idx] = 1;
            printf("%d ", idx+1); // print 1-based index
        } else {
            used[idx] = 1; // skip item
        }
    }

    printf("\nTotal Value: %d\n", totalValue);
    printf("Total Weight: %d\n", totalWeight);

    return 0;
}
