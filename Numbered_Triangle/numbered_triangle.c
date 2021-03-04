/*
Numbered Triangle

You need to print this pattern upto N.
For N = 4,
1
1 2
1 2 3 
1 2 3 4

Input: A single positive integer N
Output: Numbered Triangle upto N. Do not leave trailing whitespace at the end of each line.
*/

#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
    for (i = 1; i<=n; i++) {
        for (j = 1; j<=i; j++) {
            printf("%d", j);
            if (j != i) printf(" ");
        }
        printf("\n");
    }
    return 0;
}