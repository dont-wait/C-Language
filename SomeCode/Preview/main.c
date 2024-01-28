#include <stdio.h>
#include <stdlib.h>

//viet ct tinh sum cua 1!..n!
//Ican nhap n
//P oc bu nhoi thit luoc
//in ra tong
int getFactorial(int n);
int main(int argc, char *argv[]) {
	int n, sum;
	sum = 0;
	printf("Input n: ");
	scanf("%d", &n);
	//sum = getFactorial(1) + getFactorial(2) + getFactorial(3) + getFactorial(4);
	for (int i =1; i <= n; i++)
		sum += getFactorial(i);
	
	printf("Result: %d", sum);
	
	
	
	return 0;
}
int getFactorial(int n){
	int acc = 1;
	
	if (n == 1 || n == 0)
		return 1;
	
	else
		for (int i = 2; i <= n; i++)
			acc *= i;
	
	//printf("run in factorial", acc);
	return acc;
	
}