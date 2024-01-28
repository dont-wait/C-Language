#include <stdio.h>
#include <stdlib.h>

//viết hàm tính n!
//I: n
//P: 1.2.3.4..n-> nhồi heo đất, nhồi theo kiểu nhân, ko phải cộng
//O: kqu nhân dồn !!!
//chọn hàm loạt máy?
//viết cả 4
void getFactorialV1();
void getFactorialV2(int n);
int getFactorialV3();
int getFactorialV4(int n);// soái ca , y = f(x) = x^2...

int main(int argc, char *argv[]) {
	//getFactorialV1();
	//getFactorialV2(6);
	//int result = getFactorialV3();
	//printf("result: %d", getFactorialV3());
	//getFactorialV4(5);
	printf("result: %d", getFactorialV4(5));
	return 0;
}
int getFactorialV4(int n)
{
	int acc = 1;
	
	if (n == 0 || n == 1)
		acc = 1;
	
	else //tạm thời chưa chặn n < 0
		//coi như tạm chấp nhận n = 2 3 4 5 6 7 8
		for (int i = 2; i <= n; i++)
			acc *= i; //acc = acc * i
	//return acc; //do hàm kh return , thì phải in ra
	//printf("%d! = %d\n", n ,acc); // k neen khi hàm trả về gtri
	return acc;
}
int getFactorialV3()
{
	int n, acc = 1;//o danhf cho toongr doonf, tích thì ban đầu tệ nhất 1
					// 1 nhân với ai cx kh ảnh hưởng ai đó
	
	printf("input a number (>= 0) to get the factorial: ");
	scanf("%d", &n);
	
	if (n == 0 || n == 1)
		acc = 1;
	//else if (n < 0)
	
		//printf("Plese input again!!!\n");
	else //tạm thời chưa chặn n < 0
		//coi như tạm chấp nhận n = 2 3 4 5 6 7 8
		for (int i = 2; i <= n; i++)
			acc *= i; //acc = acc * i
	//return acc; //do hàm kh return , thì phải in ra
	//printf("%d! = %d\n", n ,acc); // k neen khi hàm trả về gtri
	return acc;
}

void getFactorialV2(int n)
{
	int acc = 1;//o danhf cho toongr doonf, tích thì ban đầu tệ nhất 1
					// 1 nhân với ai cx kh ảnh hưởng ai đó
	
	if (n == 0 || n == 1)
		acc = 1;
	else //tạm thời chưa chặn n < 0
		//coi như tạm chấp nhận n = 2 3 4 5 6 7 8
		for (int i = 2; i <= n; i++)
			acc *= i; //acc = acc * i
	//return acc; do hàm kh return , thì phải in ra
	printf("%d! = %d\n", n ,acc);
}

void getFactorialV1(){
	int n, acc = 1;//o danhf cho toongr doonf, tích thì ban đầu tệ nhất 1
					// 1 nhân với ai cx kh ảnh hưởng ai đó
	printf("input a number (>= 0) to get the factorial: ");
	
	scanf("%d", &n); // có khả năng cà chớn !!! VALIDATION ĐÃ TỪNG HC
	if (n == 0 || n == 1)
		acc = 1;
	
	else //tạm thời chưa chặn n < 0
		//coi như tạm chấp nhận n = 2 3 4 5 6 7 8
		for (int i = 2; i <= n; i++)
			acc *= i; //acc = acc * i
	//return acc; do hàm kh return , thì phải in ra
	printf("%d! = %d\n", n ,acc);
}