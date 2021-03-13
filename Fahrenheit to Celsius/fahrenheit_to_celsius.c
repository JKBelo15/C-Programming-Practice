#include <stdio.h>

int main() {
    float fahr, cels;
    int lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    while(fahr <= upper) {
        cels = (5.0*(fahr-32.0))/9.0;
        printf("%3.0f %6.1f\n", fahr, cels);
        fahr = fahr + step;
    }

    return 0;
}