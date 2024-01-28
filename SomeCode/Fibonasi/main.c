#include <stdio.h>
#include <stdlib.h>

//in ra dãy số Fibonasi
//IPO
//I

//P: 0 1 1 2 3 5 8 13 21 34

//O:in ra dãy Fibonasi

int fibonacci (int n);

int main(int argc, char *argv[]) {
	printf("10 value of day fibanacci\n");
	for (int i = 1; i < 10; i++)
		printf("%d ", fibonacci(i));
	return 0;
}
int fibonacci (int n){
	int f0 = 0, f1 = 1, fn = 1;
	if (n == 0 || n ==1)
		return fn;
	else
		for (int i = 2; i < n; i ++)
			{
			f0 = f1 ;
			f1 = fn;
			fn = f0 + fn;	
			}	
		return fn;

}