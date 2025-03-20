#ifndef FUNCTION_H
#define FUNCTION_H

#include <stdio.h>
#include <string.h>

// Hiển thị lời chào
void chaoMung();

// Nhập thông tin học sinh
void nhapThongTinHocSinh(char ten[][50], int diem[], int size);

// Hiển thị thông tin học sinh
void hienThiThongTinHocSinh(char ten[][50], int diem[], int size);

// Tính điểm trung bình
double tinhDiemTrungBinh(int diem[], int size);

// Tìm điểm cao nhất
int timDiemCaoNhat(int diem[], int size);

#endif
