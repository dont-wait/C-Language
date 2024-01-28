#include <stdio.h>
#include <string.h>
#include "iostream"
using namespace std;
struct SinhVien{
    int MSSV;
    char Ten[40];
    char lop[40];
    float DiemMon1;
    float DiemMon2;
    float DiemMon3;
};

typedef SinhVien SV;

void nhapSinhVien(SV &sv);
void xuatSinhVien(SV sv);
void nhapDanhSachSinhVien(SV ds[], int &n);
void xuatDanhSachSinhVien(SinhVien ds, int n);
void xuatvaoFile(SV ds[], int n);
void docVaoFile(SV ds[], int n);
void sapXepSinhVienTheoDiem(SV ds[], int n);
float diemTB(SV sv);
void timSinhVienNhacNho(SV ds[], int n);//điểm trung bình dưới năm
                                        //in ra danh sách sinh viên nhắc nhở
void xuatVaSapXep(SV ds[], int n);
void xuatVaTimSinhVien(SV ds[], int n);
	
void xuatVaTimSinhVienNhacNho(SV ds[], int n) {
	
	FILE *f = fopen("DS SINH VIEN.txt", "a");
	
	fprintf(f, "\nDANH SACH SINH VIEN BI NHAC NHO:\n");
	for (int i = 0; i < n; i++) {
        if(diemTB(ds[i]) < 5)
			fprintf(f, "|MSSV: %d|Ten: %s|Diem mon 1: %.2f|Diem mon 2: %.2f|Diem mon 3: %.2f|\n",
                                                                 ds[i].MSSV,
                                                                 ds[i].Ten,
                                                                 ds[i].DiemMon1,
                                                                 ds[i].DiemMon2,
                                                                 ds[i].DiemMon3);
    }
	fclose(f);
}
void xuatVaSapXep(SV ds[], int n) {
	FILE *f = fopen("DS SINH VIEN.txt", "a");
	sapXepSinhVienTheoDiem(ds, n);
	fprintf(f, "\nDANH SACH SINH VIEN SAU KHI SAP XEP:\n");
	for (int i = 0; i < n; i++) {
        fprintf(f, "|MSSV: %d|Ten: %s|Diem mon 1: %.2f|Diem mon 2: %.2f|Diem mon 3: %.2f|\n",
                                                                 ds[i].MSSV,
                                                                 ds[i].Ten,
                                                                 ds[i].DiemMon1,
                                                                 ds[i].DiemMon2,
                                                                 ds[i].DiemMon3);
    }
	fclose(f);
}

void timSinhVienNhacNho(SV ds[], int n) {
	printf("\nDANH SACH SINH VIEN BI NHAC NHO:\n");
    for (int i = 0; i < n; ++i) {
        if(diemTB(ds[i]) < 5)
            xuatSinhVien(ds[i]);
    }


}

float diemTB(SV sv) {
    return (sv.DiemMon1 + sv.DiemMon2 + sv.DiemMon3) / 3;
}
void sapXepSinhVienTheoDiem(SV ds[], int n) {
    printf("\nDANH SACH THEO THU TU CAO XUONG THAP: \n");
	for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if(diemTB(ds[i]) < diemTB(ds[j])) {
                SV t = ds[i];
                ds[i] = ds[j];
                ds[j] = t;
            }
        }
    }
    for(int i = 0; i < n; i++)
    	xuatSinhVien(ds[i]);
}

void nhapSinhVien(SV &sv){
	fflush(stdin);
    printf("\nNhap MSSV: "); scanf("%d", &sv.MSSV); fflush(stdin);
    printf("\nTen: "); gets(sv.Ten); fflush(stdin);
    printf("\nLop: "); gets(sv.lop); fflush(stdin); 
    printf("\nDiemMon1: "); scanf("%f", &sv.DiemMon1);
    printf("\nDiemMon2: "); scanf("%f", &sv.DiemMon2);
    printf("\nDiemMon3: "); scanf("%f", &sv.DiemMon3);

}

void xuatSinhVien(SV sv){
    printf("|%4d|%10s|%10s|%4.2f|%4.2f|%4.2f|\n", sv.MSSV, sv.Ten, sv.lop, sv.DiemMon1, sv.DiemMon2, sv.DiemMon3);
}

void nhapDanhSachSinhVien(SV ds[], int &n){
    do{
        printf("\nNhap vao so Sinh Vien: ");
        scanf("%d", &n);
    }while(n<=0);
    for(int i = 0; i < n; i++){
        printf("\nNhap vao sinh vien thu %d: ", i + 1);
        nhapSinhVien(ds[i]);
    }

}

void xuatDanhSachSinhVien(SinhVien ds[], int n){
    for (int i = 0; i < n; i++){
        xuatSinhVien(ds[i]);
    }
}

void xuatvaoFile(SV ds[], int n) {

    FILE *f = fopen("DS SINH VIEN.txt", "w");
    for (int i = 0; i < n; i++) {
        fprintf(f, "|MSSV: %d|Ten: %s|Diem mon 1: %.2f|Diem mon 2: %.2f|Diem mon 3: %.2f|\n",
                                                                 ds[i].MSSV,
                                                                 ds[i].Ten,
                                                                 ds[i].DiemMon1,
                                                                 ds[i].DiemMon2,
                                                                 ds[i].DiemMon3);
    }
    
    fclose(f);
}
void docVaoFile(SV ds[], int n) {
    FILE *f = fopen("DS SINH VIEN.txt", "r");
    char ch; //biến lưu 1 kí tự
    do {
        ch = fgetc(f);
        printf("%c", ch);

    }while (ch != EOF);	//end of file

    fclose(f);
}

    int main() {
        SV ds[100];
        int n;
        int chon;
        do {
            printf("\nMENU: ");
            printf("\n1-Nhap danh sach Sinh Vien: ");
            printf("\n2-Xuat danh sach Sinh Vien: ");
            printf("\n3-Xuat vao FILE: ");
            printf("\n4-Doc vao File: ");
            printf("\n5-Sap xep sinh vien co thanh tich cao: ");
            printf("\n6-Xuat danh sach sinh vien nhac nho: ");
            printf("\n7-Xuat va sap xep danh sach: ");
            printf("\n8-Tim va xuat danh sach sinh vien bi nhac nho: ");
			printf("\n9-Thoat");
            printf("\nMoi nhap: ");
            scanf("%d", &chon);

            switch (chon) {
                case 1:
                    nhapDanhSachSinhVien(ds, n);
                    break;
                case 2:
                    xuatDanhSachSinhVien(ds, n);
                    break;
                case 3:
                    xuatvaoFile(ds, n);
                    break;
                case 4:
                    docVaoFile(ds , n);
					break;
                case 5:
                	sapXepSinhVienTheoDiem(ds, n);
                	break;
                case 6:
                	timSinhVienNhacNho(ds, n);
                	break;
                case 7:
                	xuatVaSapXep(ds, n);
                	break;
				case 8:
					xuatVaTimSinhVienNhacNho(ds, n);
					break;
				case 9:
                    printf("\nChuc ban ngay tot lanh!!!");
                    break;
            }

        } while (chon != 9);
    }

