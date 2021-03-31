#include <stdio.h>

/*  Program to capture tabs backspace and
    backlash and transform them to escape symbols
    (The C Programming Language Exercise 1-10) */

int main(void) {
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t') 
            printf("\\t");
        else if (c == '\b') 
            printf("\\b");
        else if (c == '\\')
            printf("\\\\");
        else 
            putchar(c);
    }

    return 0;
}