#include <stdio.h>

/*  Program for Replacing multiple blanks between
    words into Single Blank 
    (The C Programming Language Exercise 1-9) */

int main() {
    int c, lastC = (int)(-1);

    while ((c = getchar()) != EOF) {
        if (lastC == ' ' && c == ' ')
            ;
        else
            putchar(c);
        lastC = c;
    }
    
    return 0;
}