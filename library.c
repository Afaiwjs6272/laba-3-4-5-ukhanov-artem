#include <stdio.h>
int main () {
    int m;
    int d;
    int g=10;
    int r=100;
    int b1t=1;
    scanf("%d", &m);
    scanf("%x",&d);
    printf("%d\n", g < m && r > m);
    b1t=b1t>>21;
    if (b1t&d)
        printf("1");
    else
        printf("0");
    return 0;
}