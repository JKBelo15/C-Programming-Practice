#include <stdio.h>

/* copy input then print */

int main() {
    int c;

    while ((c = getchar()) != EOF) 
        putchar(c);

    return 0;
}