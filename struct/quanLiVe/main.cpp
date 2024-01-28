//bài toán quản lí vé xem phim
//1 bộ phim bao gồm:	_Tên phim
//						_Giá tiền
//						_Xuất chiếu(THOI GIAN) + giờ  + phút  + s
//						_Ngày xem(NGAY)		   + ngày + tháng + năm
//						_Nước sản xuất
//cần 3 struct:  1 struct lớn chứa các đặc điểm, đặc điểm
//			     1 struct chứa thời gian
//				 1 struct chứa ngày tháng năm

//------------------------------------------------------------------

//tiếp đó ta cần n bộ phim nên ta dùng mảng chứa struct lớn này
//tiếp đó cần các hàm kiểm tra nếu đúng thì trả value phù hợp
#include <stdio.h>
#include <conio.h>
#include <string.h>
#define MAX 100
struct NGAY
{
	int day;
	int month;
	int year;
};
struct THOIGIAN
{
	int hour;
	int minute;
	int second;
	
};
struct VE
{
	char nameMovie[20];
	int cost;
	THOIGIAN xuatChieu;
	NGAY ngayXem;
	char productCountry[20];
};
void nhapN(int &n);
void input1VE(VE &a);
void printInfo1VE(VE a);
void inputNInforVE(VE a[], int n);
void printNInforVE(VE a[], int n);
void kiemTraXuatChieu730(VE a[], int n);
void kiemTraTenPhimSkullIsland(VE a[], int n);
int main() {
	VE a[MAX];
	int n;
	nhapN(n);
	//input1VE(a);
	//printInfo1VE(a);
	inputNInforVE(a, n);
	printNInforVE(a, n);
	kiemTraXuatChieu730(a, n);
	kiemTraTenPhimSkullIsland(a, n);
	getch();
	return 0;
}
//kiểm tra tên phim Skull Island
void kiemTraTenPhimSkullIsland(VE a[], int n) {
	printf("\nDANH SACH VE CO TEN PHIM Skull Island\n");
	for (int i = 0; i < n; i++)
		if (strcmp(a[i].nameMovie, "Skull Island") == 0)
			printInfo1VE(a[i]);
}

//kiểm tra có xuất chiếu 730 thì in ra
void kiemTraXuatChieu730(VE a[], int n) {
	printf("\nDANH SACH PHIM CO XUAT CHIEU 7h30:\n");
	for (int i = 0; i < n; i++) 
		if (a[i].xuatChieu.hour == 7 && a[i].xuatChieu.minute == 30)
			printInfo1VE(a[i]);
		

}

//in ra n thông tin vé tương ứng với n khai báo
void printNInforVE(VE a[], int n) {

	for (int i = 0; i < n; i++)
		printInfo1VE(a[i]);
}
//nhập n thông tin vé tương ứng với n khai báo
void inputNInforVE(VE a[], int n) {

	for (int i = 0; i < n; i++)
	{
		printf("\nNhap thong tin ve #%d\n", (i + 1));
		input1VE(a[i]);
	}
}
//giới hạn yêu cầu đầu vào
void nhapN(int &n) {
	do{
		printf("Nhap n thong tin ve: ");
		scanf("%d", &n);
	} while (n < 0 || n > MAX);
}
//in thông tin 1 vé
void printInfo1VE(VE a) {
	printf("|%-20s|%4.1d$|%dg%dp%2s    |%d/%d/%d   |%-10s|\n"
											  , a.nameMovie
											  , a.cost
											  , a.xuatChieu.hour, a.xuatChieu.minute, a.xuatChieu.second
											  , a.ngayXem.day, a.ngayXem.month, a.ngayXem.year
											  , a.productCountry);
}
//nhập thông tin 1 vé
void input1VE(VE &a) {
	fflush(stdin);
	printf("Ten phim: ");
	gets(a.nameMovie);
	printf("Nhap gia: ");
	scanf("%d", &a.cost);
	printf("Xuat chieu(hh/mm/ss): ");
	scanf("%d%d%d", &a.xuatChieu.hour
			   	  , &a.xuatChieu.minute
		          , &a.xuatChieu.second);
	printf("Ngay xem(dd/mm/yyyy): "); 
	scanf("%d%d%d", &a.ngayXem.day
		          , &a.ngayXem.month
		          , &a.ngayXem.year);
	printf("Nuoc san xuat: ");
	fflush(stdin);
	gets(a.productCountry);


}

