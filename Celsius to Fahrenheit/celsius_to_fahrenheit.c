#include <stdio.h>

/*program that prints a table of Celsius-to-Fahrenheit
  from 0-300*/

int main() {
    int fahr, cels;
    int lowest = 0;
    int highest = 300;
    int step = 20;

    cels = lowest;

    while (cels <= highest) {
        fahr = ((cels/5)*9)+32;
        printf("%3d %6d\n", cels, fahr);
        cels = cels + step;
    }

    return 0;
}