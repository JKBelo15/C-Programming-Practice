
#include <stdio.h>

#define OUT 0
#define IN  1
#define ARRAY_SIZE 30
#define MAX_INPUT 99

/*  Program to count the number of words in the input and
    put it in a histogram (The C Programming Language - Exercise 1-13)*/

void printArray (int ni, int *arr);
void printHisto (int ni, int *arr);
void printVertHisto (int ni, int *arr, int max_input);

int main() {
    int c, nw, state, warr[ARRAY_SIZE], ni;

    state = OUT;
    ni = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            if (ni < ARRAY_SIZE)
                warr[ni] = nw;
            else if (ni >= ARRAY_SIZE) {
                for (int i = 0; i <= ARRAY_SIZE; ++i)
                    warr[i] = warr[i+1];
                warr[ARRAY_SIZE-1] = nw;
            }
            nw = 0;
            // printHisto(ni + 1, warr);
            printVertHisto(ni + 1, warr, ARRAY_SIZE);
            ++ni;
            if (ni >= MAX_INPUT) {
                printf("Max number of inputs reached, resetting to 0\n");
                ni = 0;
            }
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

void printVertHisto(int ni, int *arr, int max_input) {
    int max = 0;
    int *temp = arr;
    int first_column = 1;
    int origNI = ni;
    if (ni > max_input)
        ni = max_input;
    for (int i = 0; i < ni; ++i) {
        if (max < *arr)
            max = *arr;
        ++arr;
    }
    arr = temp;
    for (int i = max; i >= 0; --i) {
        printf("%5d|", i);
        for (int j = 0; j < ni; ++j) {
            if (i == 0)
                printf("___");
            else if (*arr >= i)
                printf(" __");
            else 
                printf("   ");
            ++arr;
        }
        printf("\n");
        arr = temp;
    }
    printf("Input|");
    if (origNI > max_input) {
        first_column = origNI - max_input + 1;
    }
    for (int i = first_column; i <= origNI; ++i)
        printf("%3d", i);
    printf("\n\n\n");
    // printf("%d", max);
}