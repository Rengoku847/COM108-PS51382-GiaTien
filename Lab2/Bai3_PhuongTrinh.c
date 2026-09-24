#include <stdio.h>
int main () {
    float a, b;
    float x;
    //nhap so
    printf("Nhap a: ");
    scanf("%f", &a);
    printf("Nhap b: ");
    scanf("%f", &b);
    // tinh x
    x =(float)(-b) / a;
    // xuat x
    printf("ket qua x = %.2f\n", x);
    return 0;
}