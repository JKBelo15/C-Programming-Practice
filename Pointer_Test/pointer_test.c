#include <stdio.h>
#define START_ADDRESS 0x0200

/* a program for me to learn more about pointers */

short s = 0x1122;
char *p = (char *)START_ADDRESS;

int main() {
    p = p + 3;
    *p = s;
    printf("%d\t", s);
    printf("%p\n", &s);
    printf("%d\t", *p);
    printf("%p\n", p);
    return 0;
}