#include <stdio.h>
int main () {
    int a[]={10, 20, 30, 40, 50, 60, 70};
    printf("%d %d %d %d %d %d %d\n",a[0],a[1],a[2],a[3],a[4],a[5],a[6]);
    int mas[2][2]={1,1,1,4};
    int mas2[2][2]={1,2,4,1};
    int mas3[2][2];
         printf("%d %d %d %d %d %d %d\n",a[0],a[1],a[2],a[3],a[4],a[5],a[6]);
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
