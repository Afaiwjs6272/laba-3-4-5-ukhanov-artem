#include <stdio.h>
int main () {
    double mak[7] = {10, 20, 30, 40,50,60,70};
    int mas[2][2]={1,1,1,4};
    int mas2[2][2]={1,2,4,1};
    int mas3[2][2];
    for (int i = 0; i < 7; i++) {
        printf("%lf\n", *(mak + i));
    }
    mas3[0][0]=mas[0][0]*mas2[0][0]+mas[0][1]*mas2[1][0];
    mas3[0][1]=mas[0][0]*mas2[0][1]+mas[0][1]*mas2[1][1];
    mas3[1][0]=mas[1][0]*mas2[0][0]+mas[1][1]*mas2[1][0];
    mas3[1][1]=mas[1][0]*mas2[0][1]+mas[1][1]*mas2[1][1];
    printf("\n");
    printf("%d",mas3[0][0]);
    printf(" ");
    printf("%d\n",mas3[0][1]);
    printf("%d",mas3[1][0]);
    printf(" ");
    printf("%d",mas3[1][1]);
    return 0;
}