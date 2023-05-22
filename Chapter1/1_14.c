#include <stdio.h>

#define MAX_CHAR 128  // maximum character value we will count

int main() {
    int frequencies[MAX_CHAR];  // array to store counts of each character
    int c, i;
    
    // initialize all counts to zero
    for (i = 0; i < MAX_CHAR; i++) {
        frequencies[i] = 0;
    }
    
    // read input and count frequencies of each character
    while ((c = getchar()) != EOF) {
        if (c >= 0 && c < MAX_CHAR) {
            frequencies[c]++;
        }
    }
    
    // print histogram of character frequencies
    printf("Histogram of character frequencies:\n");
    for (i = 0; i < MAX_CHAR; i++) {
        if (frequencies[i] > 0) {
            printf("%3d (", i);
            if (i >= 32 && i <= 126) {
                printf("'%c'", i);
            } else {
                printf("   ");
            }
            printf("): ");
            for (int j = 0; j < frequencies[i]; j++) {
                printf("*");
            }
            printf("\n");
        }
    }
    
    return 0;
}
