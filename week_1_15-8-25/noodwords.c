#include <stdio.h>

int main() {
    char str[] = "Hello world this is C program";
    int count = 1; // start from 1 because last word ke baad space nahi hota

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            count++;
        }
    }

    printf("Number of words: %d\n", count);
    return 0;
}
