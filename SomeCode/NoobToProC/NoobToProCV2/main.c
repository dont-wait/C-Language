#include <stdio.h>
#include <stdlib.h>

//Tính S(n) = 1/2 + 2/3 + 3/4 +...+ n/n+1

//P: cho vòng lặp chạy tới khi n
//   mỗi lần n chạy thì dứi mẫu + 1 sau đó cộn cho số tiếp theo

//O: in ra tổng
int main(int argc, char *argv[]) {
	int n;
	float sum = 0;
	do{
		
		printf("Moi nhap n: ");
		scanf("%d", &n);
		if (n < 1)
			printf("Moi ban nhap lai!!!\n"); 

	}while(n < 1);
		for(int i = 1; i <= n; i++)
			sum += i*1.0/(i+1);
	printf("Sum of values is: %.2f", sum);
	
	return 0;
}