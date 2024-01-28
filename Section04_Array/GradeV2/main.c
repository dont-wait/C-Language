#include <stdio.h>
#include <stdlib.h>

//lưu 10 cột điểm môn C và in ra

int main(int argc, char *argv[]) {
	float c[10];//có 10 biến float 
	scanf("%f", &c[0]);//tiếp tục thay 0 = 1
	printf("Please input 10 grades of the C class (0..10): \n");
	
	for (int i = 0; i < 10; i++)
		{
			printf("Input grade [%d]: ", (i + 1));
			scanf("%f", &c[i]);
		}
	printf("Here is your grades\n");
	for (int i = 0; i < 10; i++)
		printf("%.2f\t", c[i]);
		
	return 0;
}