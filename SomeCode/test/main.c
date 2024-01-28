#include <stdio.h>
#include <conio.h>

void xuatFile(int a[], int n);
void docFile(int a[], int n);
void nhapMang(int a[], int &n);

int main() {
    int a[50];
    int n;
    nhapMang(a, n);
    xuatFile(a, n);
    // docFile(a, n);
    getch();
    return 0;
}

void nhapMang(int a[], int &n) {
    printf("Nhap n: ");
    scanf("%d", &n);
    // Thêm mã để nhập các phần tử mảng dựa trên kích thước 'n'
}

void docFile(int a[], int n) {
    FILE *f = fopen("Mang a.txt", "r");
    char ch;
    
    do {
        ch = fgetc(f);
        printf("%c", ch);
    } while (ch != EOF);
    fclose(f);
}

void xuatFile(int a[], int n) {
    FILE *f = fopen("Mang a.txt", "w");
    fprintf(f, "%d", n);
    for (int i = 0; i < n; i++)
        fprintf(f, " %d", a[i]);
    fclose(f);
}