#include <stdio.h>
 int main() {
    float diemToan, diemLy, diemHoa, diemTB;
    //nhap diem
    printf("Nhap diem Toan: ");
    scanf("%f", &diemToan);
    printf("Nhap diem Ly: ");
    scanf("%f", &diemLy);
    printf("Nhap diem Hoa: ");
    scanf("%f", &diemHoa);
    //tinh diem trung binh
    diemTB = (diemToan * 3 + diemLy * 2 + diemHoa) / 6;
    //xuat diem trung binh
    printf("Diem Toan: %.2f\n", diemToan);
    printf("Diem Ly: %.2f\n", diemLy);
    printf("Diem Hoa: %.2f\n", diemHoa);
    printf("Diem trung binh: %.2f\n", diemTB);
    return 0;
 }