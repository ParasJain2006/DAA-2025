kmp
#include <stdio.h>
#include <string.h>

int main() {

    char t[] = "ababcabcababc";
    char p[] = "abc";

    int n = strlen(t);
    int m = strlen(p);

    int l[100];
    int a = 0, b = 1;
    l[0] = 0;

    // LPS Array (Prefix Function)
    while (b < m) {
        if (p[b] == p[a]) {
            a++;
            l[b] = a;
            b++;
        } else {
            if (a != 0)
                a = l[a - 1];
            else {
                l[b] = 0;
                b++;
            }
        }
    }

    int i = 0, j = 0;

    // Pattern Matching
    while (i < n) {

        if (t[i] == p[j]) {
            i++;
            j++;
        } else {
            if (j != 0)
                j = l[j - 1];
            else
                i++;
        }

        if (j == m) {
            printf("%d\n", i - j);
            j = l[j - 1];
        }
    }

    return 0;
}
