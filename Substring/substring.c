/* Using strstr() function in C*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100] = "this is javatpoint with c and java";
    char *sub;
    sub = strstr(str, "java");
    printf("\nSubstring is : %s", sub);
    return 0;
}