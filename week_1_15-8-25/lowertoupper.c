#include <stdio.h>
#include <ctype.h>
int main() {
    char str[] = "Hello worLd";
    for(int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
    printf("Uppercase string: %s", str);
    return 0;
}
