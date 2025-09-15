#include <stdio.h>
#include <stdbool.h>

bool isPowerOfTwo(int n) {
    if (n <= 0) return false;  
    return (n & (n - 1)) == 0;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPowerOfTwo(num))
        printf("%d is a power of 2\n", num);
    else
        printf("%d is NOT a power of 2\n", num);

    return 0;
}
