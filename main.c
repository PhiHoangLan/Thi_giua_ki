// main.c
#include <stdio.h>
#include "functions.h"

int main() {
    chaoMung();

    int soLuong;
    printf("Nhap so luong hoc sinh: ");
    scanf("%d", &soLuong);

    char tenHocSinh[soLuong][50];  // Mảng lưu tên học sinh
    int diemHocSinh[soLuong];      // Mảng lưu điểm học sinh

    // Nhập và hiển thị thông tin học sinh
    nhapThongTinHocSinh(tenHocSinh, diemHocSinh, soLuong);
    hienThiThongTinHocSinh(tenHocSinh, diemHocSinh, soLuong);

    // Tính điểm trung bình
    double diemTB = tinhDiemTrungBinh(diemHocSinh, soLuong);
    printf("\nDiem trung binh cua lop: %.2f\n", diemTB);

    // Tìm điểm cao nhất
    int diemCaoNhat = timDiemCaoNhat(diemHocSinh, soLuong);
    printf("Diem cao nhat cua lop: %d\n", diemCaoNhat);

    // Phân loại học sinh theo điểm trung bình
    if (diemTB >= 8.5) {
        printf("Xep loai: Gioi\n");
    } else if (diemTB >= 6.5) {
        printf("Xep loai: Kha\n");
    } else if (diemTB >= 5.0) {
        printf("Xep loai: Trung binh\n");
    } else {
        printf("Xep loai: Yeu\n");
    }

    return 0;
}
