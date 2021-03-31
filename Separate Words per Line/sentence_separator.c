#include <stdio.h>

/*  Program to separate words into line
    into lines of words
    <The C Programming Language Exercise 1-12   */

int main() {
    int c;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t')
            printf("\n");
        else
            putchar(c);
    }

    return 0;
}