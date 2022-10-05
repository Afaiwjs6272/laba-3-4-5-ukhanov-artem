#include <stdio.h>
int main () {
    int a;
    int b;
    scanf("%x", &a);
    scanf("%o", &b);
    printf("%u\n", a);
    printf("%o\n", a);
    printf("%o\n", a >> 1);
    printf("%o\n", ~a);
    printf("%o\n", (a | b));
    return 0;
}
