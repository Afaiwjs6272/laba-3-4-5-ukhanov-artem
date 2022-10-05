#include <stdio.h>
int main () {
    int a;
    int b;
    int c=a;
    scanf("%x", &a);
    scanf("%o", &b);
    printf("%d\n", a);
    printf("%x\n", a);
    printf("%o",a);
    printf("%x\n", a >> 1);
    printf("%o\n", ~a);
    printf("%d\n", (c | b));
    return 0;
}
