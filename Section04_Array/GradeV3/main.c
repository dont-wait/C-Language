#include <stdio.h>
#include <stdlib.h>

//Khảo sát ram đc cấp cho mảng
int main(int argc, char *argv[]) {
	float c[10]; // có 10 biến ròi ròi // chính xác là 11
	//hỏi 10 biến ở đâu
	/*printf("The address of C[0] is %u\n", &c[0]);
	printf("The address of C[1] is %u\n", &c[1]);
	printf("The address of C[2] is %u\n", &c[2]);
	printf("The address of C[3] is %u\n", &c[3]);
	printf("The address of C[4] is %u\n", &c[4]);
	printf("The address of C[5] is %u\n", &c[5]);
	printf("The address of C[6] is %u\n", &c[6]);
	printf("The address of C[7] is %u\n", &c[7]);
	printf("The address of C[8] is %u\n", &c[8]);
	printf("The address of C[9] is %u\n", &c[9]);
	printf("The address of C[12] is %u\n", &c[12]);//in vui hoi, vì đã vượt hơn value của mảng
												// lưu nối tiếp nhau
												//cách nhau 4 byte
												//1 value trong mảng đc cấp 4 byte
	*/
	printf("The address of all of elements in aray: \n");
	for (int i = 0; i <10; i++)
		printf("The address of c[%d] is %u\n", i, &c[i]);
	//nếu muốn hiện 1 cho dễ hiểu 
		//int i = 1; i <= 10; i++
			//				c[i - 1]// c[10] neen lay -1 de co du 10 gia tri 
	return 0;
}