#include <stdio.h>

main() {
    int c, last_char_was_blank = 0;
    
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            if (!last_char_was_blank) {
                putchar(c);
            }
            last_char_was_blank = 1;
        } else {
            putchar(c);
            last_char_was_blank = 0;
        }
    }
    
}