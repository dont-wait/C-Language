#include <stdio.h>
#include <stdlib.h>

//cho 1 mảng các số tự nhiên 5, 10, 15, 23, 25, 3, 5, 7, 11
//In ra các số nguyên tố trong mảng này
//P: quét mảng/ rà khắp các phần tử mảng
// [0] em là 5, m có ngto hok, có, in ra
// [1] em là 10, em có ngto hog, kệ mài
//	[2] em là 15, em có ngto hg, hog, kẹ mài
//	[3] em là 23, em có ngto hg, có, in ra
//	...
//	HỎI HOÀI LẶP LẠI CÂU CHUYỆN: x, M CÓ P SỐ NGUYÊN TỐ HG???
//	CÓ THỨ BỊ LẶP LẠI, NÓ CHUYÊN BIỆT -> CHIA ĐỂ TRỊ - TÁCH HÀM
//TA CÓ 1 HÀM KIỂM TRA XEM CÓ LÀ SỐ NGUYÊN TỐ HK?

//O: 5, 23, 3, 5, 7, 11, 13

//4 loại hàm
//void isPrime(int n); //in ra mài n là ngto
int isPrime(int n);	// y = f(x)
//y = f(5) = 1;
//y = f(6) = 0;
//y = f(7) = 1;

//nhận vào con số tự nhiên trả về con số 0 1; 1 nếu ngt, 0 nếu ko
//N = 10; 10 có là ngto hok
//P: số nto là số chỉ có 2 us  1 và chính nó
//	có nhiều thuật toán
// đơn giản nhất là đếm us, m chia hết cho nh đứa nào, mấy đứa
//10
//10  chia hết cho 1 hg, có, count ++ 1
//10 chia hết cho 2 hg, có, count ++ 2
//				  3 hg		
//				   4 hg
//				5, có, count ++ 3
//....

//                10 có count ++ 4
// 				10 ơi m có chia hết cho i hok
//				10 % i ==0 hay ko %== 0 nghĩa là chia hết. % lấy dư
//cho 1 mảng, in các ngto
//hàm nhận vào 1 mảng, size. in ra các số nt sx trg mảng
void printPrimeList(int a[], int size);
int main(int argc, char *argv[]) {
	/*
	printf("5? %d\n", isPrime(5));

	printf("101? %d\n", isPrime(101));
	int result = isPrime(10);
	printf("10? %d\n", result);
	*/
	int a[] = {5, 10, 15, 23, 25, 3, 5, 7, 9, 11};
	
	printPrimeList(a, 11);
}
void printPrimeList(int a[], int size){
	int result; //chứa kq ngto hay ko
	
	printf("The array has value of\n");
	for(int i = 0; i < size; i++)
		printf("%d ", *(a + i));
		
	printf("\nThe list of prime number found in this array\n");
	for (int i = 0; i < size; i++)
	{
		result = isPrime(a[i]); //hỏi từng a[i] m có ngto hok
		//result 0 1
		if (result == 1)		// if( isPrime(a[i]) == 1)
			printf("%d ", a[i]);
	}
}
int isPrime(int n)
{
	int divisorCount = 0;
	for(int i = 1; i <= n; i++)
		if(n % i == 0)
			divisorCount ++; //nếu có chia hết cho i, ta ++, đếm tăng US là có 1
	//hết for, xét hết US ròi
	if(divisorCount == 2)
		return 1; //2US thì return 1 là NT
	//else
	return 0; //m nhìu US quá, ếu p ngto		
}
