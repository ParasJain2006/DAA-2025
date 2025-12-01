#include <stdio.h>

int main() {
    char data[] = {'a','b','c','d','e','f'};
    int freq[]   = {5,9,12,13,16,45};
    int n = 6;

    // simple bubble sort by freq
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(freq[j] > freq[j+1]){
                int t = freq[j]; freq[j] = freq[j+1]; freq[j+1] = t;
                char c = data[j]; data[j] = data[j+1]; data[j+1] = c;
            }
        }
    }

    printf("Sorted chars by frequency:\n");
    for(int i=0;i<n;i++){
        printf("%c : %d\n", data[i], freq[i]);
    }

    // combine lowest 2 again & again (only printing step)
    printf("\nHuffman combine steps:\n");
    for(int i=0;i<n-1;i++){
        printf("Combine %d + %d = %d\n", freq[i], freq[i+1], freq[i]+freq[i+1]);
        freq[i+1] = freq[i]+freq[i+1];
    }

    return 0;
}
