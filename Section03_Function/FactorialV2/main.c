#include <stdio.h>
#include <stdlib.h>

//viết hàm tính n!

int getFactorialVWRONG(int n);// soái ca , y = f(x) = x^2...

int main(int argc, char *argv[]) {
	
	printf("6!= %d\n", getFactorialVWRONG(0));
	return 0;
}
int getFactorialVWRONG(int n)
{
	
	int acc = 1;
	
	if (n == 0 || n == 1)
		//return 1; 
		acc = 1; // xử lí, ko return sớm thì sao!!! thì phiá sau vẫn chạy cho tình huống
				//n từ 2 trở đi
	
	printf("CPU is still here\n");
	
	for (int i = 2; i <= n; i++)
		acc *= i; //acc = acc * i
			
		//printf("%d! = %d", n, acc);ko nene xai khi dung` ham` tra~ ve GTri
	return acc;
			


}
int getFactorialV4(int n)
{
	int acc = 1;
	
	if (n == 0 || n == 1)
		return 1; 
	// chưa chặn n âm
	//BỎ ELSE LUN MS NGẦU !!! RETURN SỚM BAO HÀM SỰ LOẠI TRỪ, THOÁT LUN, PHẦN CÒN LẠI LÀ
	//ELSE RỒI, KO CẦN ELSE NX

		for (int i = 2; i <= n; i++)
			acc *= i; //acc = acc * i
		//printf("%d! = %d", n, acc);ko nene xai khi dung` ham` tra~ ve GTri
		return acc;

		

}

/*int getFactorialV4(int n)
{
	int acc = 1;
	
	if (n == 0 || n == 1)
		acc = 1;
	
	else 
		for (int i = 2; i <= n; i++)
			acc *= i; //acc = acc * i
	
	return acc;
}*/
