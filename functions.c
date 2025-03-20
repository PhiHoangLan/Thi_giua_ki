#include "functions.h"

// Hiển thị lời chào
void chaoMung() {
    printf("Chuong trinh quan ly diem hoc sinh\n");
}

// Nhập thông tin học sinh
void nhapThongTinHocSinh(char ten[][50], int diem[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Nhap ten hoc sinh thu %d: ", i + 1);
        scanf("%49s", ten[i]);
        printf("Nhap diem hoc sinh thu %d: ", i + 1);
        scanf("%d", &diem[i]);
    }
}

// Hiển thị thông tin học sinh
void hienThiThongTinHocSinh(char ten[][50], int diem[], int size) {
    printf("\nDanh sach hoc sinh:\n");
    printf("------------------------------\n");
    printf("| STT | Ten hoc sinh | Diem |\n");
    printf("------------------------------\n");

    for (int i = 0; i < size; i++) {
        printf("| %3d | %-12s | %3d  |\n", i + 1, ten[i], diem[i]);
    }
    printf("------------------------------\n");
}

// Điểm trung bình
double tinhDiemTrungBinh(int diem[], int size) {
    int tong = 0;
    for (int i = 0; i < size; i++) {
        tong += diem[i];
    }
    return (double)tong / size;
}

// Điểm cao nhất
int timDiemCaoNhat(int diem[], int size) {
    int max = diem[0];
    for (int i = 1; i < size; i++) {
        if (diem[i] > max) {
            max = diem[i];
        }
    }
    return max;
}
