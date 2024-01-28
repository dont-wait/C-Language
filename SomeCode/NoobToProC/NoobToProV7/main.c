#include <stdio.h>
#include <stdlib.h>

//in ra mảng chỉ chứa số nguyên tố
//IPO:
//I: 

//P: đầu tin p đưa từng phần tử vào hàm kiểm tra 
//											m là ngto hả ? OKie v in ra
//											m lầ ngto hả ? ếu, cook
// 10 chia hết cho 1 hem ? có count = 1
//    chia hết cho 2 hem ? có count = 2
//			cout > 2 ếu là số ngto. ếu đưa vào hàm in
		
//O: in ra các số ngto
int isPrime(int n);
void printPrimeList (int a[], int size);
int main(int argc, char *argv[]) {
	int a[] = {1, 3, 5, 10, 9, 11, 14, 101};
	printPrimeList(a, 8);
	return 0;
}
void printPrimeList (int a[], int size){
	int result;
	printf("The array has value of\n");
	for (int i = 0; i < size; i++)
		printf("%d ", *(a + i));
	
	printf("\n");
	
	printf("The array after has value of\n");
	for (int i = 0; i < size; i++)
		{
		//result = isPrime(a[i]);
		//if (result == 1)
		if (isPrime(a[i]) == 1)
			printf("%d ", a[i]);					
		}

}
int isPrime(int n){
	int divisorCount = 0;
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			divisorCount++;
	if (divisorCount == 2)
		return 1;
	return 0;
}
	