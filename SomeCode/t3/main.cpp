#include <stdio.h>
#include <stdlib.h>

struct SINHVIEN{
    char ten[50];
    char ho[30];
    float diem_mon_1;
    float diem_mon_2;
    float diem_mon_3;
};

int main() {
    // Mở tập tin để đọc
    SINHVIEN ds[4];
    
	FILE *file = fopen("DS SINH VIEN.txt", "r");
 	   

    // Đếm số lượng sinh viên trong tập tin
    int soLuongSinhVien;
    fscanf(file, "%d", &soLuongSinhVien);

    

    // Đọc thông tin sinh viên từ tập tin
    for (int i = 0; i < soLuongSinhVien; ++i) {
        fscanf(file, "%s %s %f %f %f", ds[i].ten, ds[i].ho,
               &ds[i].diem_mon_1, &ds[i].diem_mon_2, &ds[i].diem_mon_3);
    }

    // Đóng tập tin
    fclose(file);

    // In thông tin sinh viên
    for (int i = 0; i < soLuongSinhVien; ++i) {
        printf("Ten: %s\Ho: %s\nDiem Mon 1: %.2f\nDiem Mon 2: %.2f\nDiem Mon 3: %.2f\n\n",
               ds[i].ten, ds[i].ho, ds[i].diem_mon_1,
               ds[i].diem_mon_2, ds[i].diem_mon_3);
    }

    // Giải phóng bộ nhớ
    

    return 0;
}
