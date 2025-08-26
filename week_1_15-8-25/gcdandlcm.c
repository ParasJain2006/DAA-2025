#include <stdio.h>
int main() {
    int num1, num2, gcd, lcm;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    gcd = 1; 
    for (int i = 1; i <= num1 && i <= num2; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }
    lcm= (num1 * num2) / gcd; // LCM formula
    printf("GCD/HCF of %d and %d = %d\n", num1, num2, gcd);
    printf("LCM of %d and %d = %d\n", num1, num2, lcm);
    return 0;
}
