#include <stdio.h>
#include <stdlib.h>

//Viết áp in ra tổng cảu dãy số sau 1! + 2! + 3! + 4! + n!
//IPO
//I: ko có n lm sao bt tính đến mấy, bt phải nhồi bao nhiêu con ốc bu
//P: vừa lm ở V2
//O tùy n là mấy, kq sum sẽ là mấy

int getFactorial(int n);

int main(int argc, char *argv[]) {
int sum, n;
	
	
	do{	
		
		printf("Input an integer >= 2 to  get the sum of a factorial Chain: ");
		scanf("%d", &n);
	
		
	}while(n < 1);
	sum = 0;
	for(int i =1; i <= n; i++)
		sum += getFactorial(i);
	
		printf("Sum of factorial chain from 1! to %d! = %d\n", n, sum); //153
			

	return 0;
}
int getFactorial(int n){
	
	int acc = 1;
	
	if (n == 0 || n == 1)
		return 1; 
		
	for(int i =2; i <= n; i++) //chua xet n < 0
			acc *= i;
		
	return acc;
}

