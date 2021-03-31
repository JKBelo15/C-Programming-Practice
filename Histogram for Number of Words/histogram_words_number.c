
#include <stdio.h>

#define OUT 0
#define IN  1

/*  Program to count the number of words in the input and
    put it in a histogram (The C Programming Language - Exercise 1-13)*/

void printArray (int ni, int *arr);
void printHisto (int ni, int *arr);
void printVertHisto (int ni, int *arr);

int main() {
    int c, nw, state, warr[10], ni;

    state = OUT;
    ni = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            if (ni < 10) 
                warr[ni] = nw;
            nw = 0;
            // printHisto(ni + 1, warr);
            printVertHisto(ni + 1, warr);
            ++ni;
        }
        if ( c == ' ' || c == '\n' || c == '\t') 
            state = OUT;
        else if (state == OUT) {
            ++nw;
            state = IN;
        }
    }
}

void printArray(int ni, int * arr) {
    for (int i = 0; i < ni; ++i) {
        printf("%d ", *arr);
        ++arr;
    }
    printf("\n");
}

void printHisto(int ni, int * arr) {
    int max = 0;
    for (int i = 0; i < ni; ++i) {
        printf("Input %-2d|", i+1);
        for (int j = 0; j < *arr; ++j)
            printf("XXX");
        printf("\n");
        if (max < *arr)
            max = *arr;
        ++arr;
    }
    printf("\t");
    for (int i = 0; i <= max; ++i)
        printf("--");
    printf("\n");
    printf("\t0");
    for (int i = 1; i <= max; ++i)
        printf("%3d", i);
    printf("\n");
}

void printVertHisto(int ni, int *arr) {
    int max = 0;
    int *temp = arr;
    for (int i = 0; i < ni; ++i) {
        if (max < *arr)
            max = *arr;
        ++arr;
    }
    arr = temp;
    for (int i = max; i >= 0; --i) {
        printf("%2d|", i);
        for (int j = 0; j < ni; ++j) {
            if (*arr >= i)
                printf(" _");
            else 
                printf("  ");
            ++arr;
        }
        arr = temp;
        printf("\nInput 0");
        printf("\n");
    }
    // printf("%d", max);
}