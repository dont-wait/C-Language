#include <stdio.h>
#include <conio.h>
#define MAXSIZE 100
struct infoGuest {
	char hoTen[35];
	char phoneNumber[12];
	char address[36];
	char request[31];
};
struct queue {
	infoGuest info[MAXSIZE];
	int n;
	int head;	//chỉ số đầu hàng đợi
	int tail;	//chỉ số cuối hàng đợi
};
void initQueue(queue& qu);
bool isEmpty(queue qu);
bool isFull(queue qu);
int push(queue& qu, infoGuest x);
int pop(queue& qu, infoGuest x);
void inputInfo(infoGuest& x);
void printInfo(infoGuest x);
void showQueue(queue qu);
void inputListBuyBmi(queue &qu);
void printMenu();
int main() {
	infoGuest guest[MAXSIZE];
	queue qu;
	
	int choice;
	do {
		printMenu();
		printf("Moi ban nhap lua chon: ");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			initQueue(qu);
			printf("Tao hang doi thanh cong\n");
			break;
		case 2:
			inputListBuyBmi(qu);
			break;
		case 3:
			showQueue(qu);
			break;
		case 4:
			infoGuest newGuest;
			printf("Nhap thong tin nguoi muon them:\n");
			inputInfo(newGuest);	
			if(push(qu, newGuest))
				printf("\nHang doi them thanh cong\n");
			else
				printf("Hang doi da day\n");
			
			break;
		case 5:
			infoGuest removedGuest;
			if (!isEmpty(qu)) {
                pop(qu, removedGuest);
                printf("Da bo nguoi mua banh mi: ");
                printInfo(removedGuest);
            } else 
                printf("Hang doi rong, khong co nguoi mua de bo.\n");
            break;
		default:
			printf("Vui long nhap lai!\n");
			break;
		}
	} while (choice != 0);
	return 0;
}
void printMenu() {
	printf("\n*********************************\n");
	printf("1.Tao hang doi\n");
	printf("2.Nhap n nguoi mua banh mi\n");
	printf("3.Xuat danh sach da ban\n");
	printf("4.Them 1 nguoi vao mua\n");
	printf("5.Bot 1 nguoi mua\n");
	printf("*********************************\n");

}

void inputListBuyBmi(queue &qu) {
	int n;
	printf("Nhap n nguoi mua: ");
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		printf("Moi ban %d nhap cac thong tin sau:\n", i + 1);
		infoGuest x = qu.info[i];
		inputInfo(x);
		push(qu, x);
	}
}

void showQueue(queue qu) {
	if (isEmpty(qu)) {
		printf("Hang doi rong\n");
		return;
	}
	printf("Noi dung cua hang doi:\n");
	for (int i = qu.head + 1; i != qu.tail; i = (i+1) % MAXSIZE)
	{
		infoGuest x = qu.info[i];
		printInfo(x);
		
	}
	// In thông tin của phần tử cuối cùng
	printInfo(qu.info[qu.tail]);
}

void printInfo(infoGuest x) {
	printf("%35s|%12s|%36s|%31s|\n", x.hoTen, x.phoneNumber, x.address, x.request);
}
void inputInfo(infoGuest& x) {

	fflush(stdin);
	printf("Ho ten: ");
	gets(x.hoTen);
	fflush(stdin);
	printf("So dien thoai: ");
	gets(x.phoneNumber); 
	fflush(stdin);
	printf("Dia chi: ");
	gets(x.address); 
	fflush(stdin);
	printf("Yeu cau: ");
	gets(x.request);
	fflush(stdin);
}
int pop(queue& qu, infoGuest x) {
	if (isEmpty(qu)) return 0;
	x = qu.info[qu.head];
	qu.head = (qu.head + 1) % MAXSIZE;
	qu.n--;
	return 1;
}
int push(queue& qu, infoGuest x) {
	if (isFull(qu))
		return 0;
	qu.tail = (qu.tail + 1) % MAXSIZE;
	qu.info[qu.tail] = x;
	qu.n++;
	return 1;
}
bool isFull(queue qu) { return qu.n == MAXSIZE; }
bool isEmpty(queue qu) { return qu.n == 0; }	//kiểm tra giá trị trả về true: n = 0
void initQueue(queue& qu) {
	qu.n = 0;
	qu.head = -1;
	qu.tail = -1;
}
