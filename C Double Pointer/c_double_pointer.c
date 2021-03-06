/* Exercise for C Double Pointer */
//What will be the output of the following program?

#include <stdio.h>

int main() {
    int a[10] = {100, 206, 300, 409, 509, 601};
    int *p[] = {a, a+1, a+2, a+3, a+4, a+5};
    // int *p = &a[0];
    int **pp = p;
    printf("%x %x %x %x %x\n", &a, &p, *pp, p, pp);
    printf("%lld %lld %d\n", pp-p, *pp-a, **pp);
    pp++;
    printf("%x %x %x\n", &a, p, pp);
    printf("%lld %lld %d\n", pp-p, *pp-a, **pp);
    *pp++;
    printf("%x %x %x\n", &a, p, pp);
    printf("%lld %lld %d\n", pp-p, *pp-a, **pp);
    ++*pp;
    printf("%x %x %x\n", &a, p, pp);
    printf("%lld %lld %d\n", pp-p, *pp-a, **pp);
    ++**pp;
    printf("%x %x %x\n", &a, p, pp);
    printf("%lld %lld %d\n", pp-p, *pp-a, **pp);
    return 0;
}