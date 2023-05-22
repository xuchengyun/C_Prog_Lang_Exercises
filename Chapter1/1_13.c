#include <stdio.h>

#define MAX_LENGTH 20  // maximum word length we will count

int main() {
    int lengths[MAX_LENGTH + 1];  // array to store counts of words of each length
    int i, c, current_length = 0;
    
    // initialize all counts to zero
    for (i = 0; i <= MAX_LENGTH; i++) {
        lengths[i] = 0;
    }
    
    // read input and count words of each length
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (current_length > 0 && current_length <= MAX_LENGTH) {
                lengths[current_length]++;
            }
            current_length = 0;
        } else {
            current_length++;
        }
    }
    
    // print histogram of word lengths
    printf("Histogram of word lengths:\n");
    for (i = 1; i <= MAX_LENGTH; i++) {
        printf("%2d |", i);
        for (int j = 0; j < lengths[i]; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}