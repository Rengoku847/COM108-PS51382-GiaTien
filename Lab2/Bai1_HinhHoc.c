#include <stdio.h>
#define PI 3.14159
int main() {
    double Chieudai, Chieurong, BanKinh;
    double ChuviHCN, DientichHCN;
    double ChuviHinhTron, DientichHinhTron;
    //nhap hinh chu nhat
    printf("Nhap chieu dai");
    scanf("%lf", &Chieudai);
    printf("Nhap chieu rong");
    scanf("%lf", &Chieurong);
    //nhap hinh tron
    printf("Nhap ban kinh");
    scanf("%lf", &BanKinh);
    //tinh hinh chu nhat
    ChuviHCN = (Chieudai + Chieurong) * 2;
    DientichHCN = Chieudai * Chieurong;
    //tinh hinh tron
    ChuviHinhTron = 2 * PI * BanKinh;
    DientichHinhTron = PI * BanKinh * BanKinh;
    //xuat ket qua
    printf("Chu vi hinh chu nhat: %.2f\n", ChuviHCN);
    printf("Dien tich hinh chu nhat: %.2f\n", DientichHCN);
    printf("Chu vi hinh tron: %.2f\n", ChuviHinhTron);
    printf("Dien tich hinh tron: %.2f\n", DientichHinhTron);
    return 0;
}