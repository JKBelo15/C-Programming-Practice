#include <stdio.h>

/* Program to count the number of blanks, tabs, and newlines on an input*/

int main() {
    int c;
    int bc, tc, nc;
    
    bc = 0;
    tc = 0;
    nc = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ')
            bc++;
        else if (c == '\t')
            tc++;
        else if (c == '\n')
            nc++;
    }

    printf("Blanks = %d, Tabs = %d and Newlines = %d", bc, tc, nc);
    
    return 0;
}