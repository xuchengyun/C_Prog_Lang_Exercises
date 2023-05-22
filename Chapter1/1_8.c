#include <stdio.h>

void main()
{
    int c, blank = 0, tab = 0, nl = 0;

    while ((c = getchar()) != EOF) 
    {
        if (c == '\n')
            ++nl;
        if (c == '\t')
            ++tab;
        if (c == ' ')
            ++blank;
    }

    printf("Number of blanks: %d\n", blank);
    printf("Number of tabs: %d\n", tab);
    printf("Number of newlines: %d\n", nl);
}
