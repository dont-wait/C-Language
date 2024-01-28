#include <stdio.h>
#include <conio.h>
#include <string.h>

int timDauCachDau(char* hoTen);
int timDauCachSau(char* hoTen);
void XuatHoDemTen(char* hoTen);
void nhapHoTen(char* hoTen);

int main() {
    char hoTen[50];
    nhapHoTen(hoTen);
	XuatHoDemTen(hoTen);
    getch();
    return 0;
}
void XuatHoDemTen(char* hoTen) {
	int first = timDauCachDau(hoTen);
	int last = timDauCachSau(hoTen);
	
	if(first != -1 && last != -1) {
		
		//in họ
		printf("Ho cua ban la: ");
		for (int i = 0; i < first; i++)
		   printf("%c", hoTen[i]);
		printf("\n");
		
		//in họ đệm
		printf("Ho dem cua ban la: ");
		for (int i = first + 1; i < last; i++)
		   printf("%c", hoTen[i]);
		printf("\n");
		
		//in tên
		printf("Ten cua ban la: ");
		for (int i = last + 1; i <= strlen(hoTen); i++) //đang là khoảng trắng nên cần + 1
		   printf("%c", hoTen[i]);
		printf("\n");
	}
	else
		printf("Ten khong hop le!!!");
}

	

//chạy for từ cuối mảng, kiếm dấu cách thứ 2
//in tất cả phần từ cuối về đầu - in ngược 
int timDauCachSau(char* hoTen) {
   
	for (int i = strlen(hoTen) ; i >= 0; i--)
	{
		if(hoTen[i] == ' ')
			return i;
	}
	return -1;
}
//chạy for tới khoảng trắng đầu tiên
//in tất cả phần tử cho tới khoảng trắng đầu tiên đó
int timDauCachDau(char* hoTen) {
   
	for (int i = 0; i < strlen(hoTen); i++)
		if(hoTen[i] == ' ')
			return i;
	return -1;
}
void nhapHoTen(char* hoTen) {
    printf("Nhap Ho Ten: ");
    scanf("%50[^\n]", hoTen); //nhập bất chấp
	printf("\n");
}

