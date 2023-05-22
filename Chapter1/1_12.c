#include <stdio.h>

#define IN 1
#define OUT 0
void main() {
    int c, state;

    state = OUT;
    // nl = nw = nc = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            if (state == IN)
            {
                state = OUT;    
                putchar('\n');
            }
        }
        else 
        {
            putchar(c);
            if (state == OUT) 
                state = IN;
        }
    }
}
