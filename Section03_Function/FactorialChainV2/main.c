#include <stdio.h>
#include <stdlib.h>

//Viết áp in ra tổng cảu dãy số sau 1! + 2! + 3! + 4! + 5!
//bài phức tạp, ta chẻ nhỏ ra, có sự lặp lại của role tinhGiaiThua() - TÁCH HÀM

int getFactorial(int n);

int main(int argc, char *argv[]) {
	
	
	int sum = 0;
	
	for(int i = 1; i <= 5; i++)
		//sum += i; //1 + 2 +3 + 4 + 5
		// 1 2 3 4 5  là đầu vào hàm giai thừa, hàm lm dì éo quan tâm
		//quan tâm m ói về tao x, x tao đưa vào, i! khi tao đưa vào i
		//tao cộng dồn trên i!, éo cộng i
		sum += getFactorial(i);
	
	
	//int sum = getFactorial(1) + getFactorial(2) + getFactorial(3) + getFactorial(4) + getFactorial(5);
	printf("Sum of factorial chain from 1! to 5! = %d", sum); //153
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

