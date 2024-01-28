#include <stdio.h>
#include <conio.h>
#include <math.h>


void nhap2SoNguyen(int &a, int &b);
int gcd(int a, int b);
int lcd(int a, int b);
void nhapN(int &n);
int isPrime(int n);	
void printNSoNguyenTo(int n);
int main(int argc, char** argv) {
	
	int a, b;
//	nhap2SoNguyen(a, b);
//	printf("UCLN cua %d va %d: %d\n", a, b, gcd(a, b));
//	printf("BCNN cua %d va %d: %d", a, b, lcd(a, b));
	int n;
	nhapN(n);
	if(isPrime(n) == 1)
		printf("%d la so nguyen to\n", n);
	else
		printf("%d ko la so nguyen to\n", n);
	printf("Danh sach cac so nguyen to tu 1 toi %d:\n", n);
	printNSoNguyenTo(n);
	return 0;
}
int isPrime(int n) {
	if(n < 2)
		return 0;
	for(int i = 2; i <= sqrt(n); i++)
		if(n % i == 0)
			return 0;
	return 1;
}
void printNSoNguyenTo(int n) {
	
	for(int i = 0; i < n; i++)
		printf("%d ", isPrime(i) == 1);
	
}
void nhapN(int &n) {
	do {
		printf("Nhap n(n > 0): ");
		scanf("%d", &n);	
	}while (n < 0);
}	
int lcd(int a, int b) {
	
	
	return abs(a * b) / gcd(a, b);
}
int gcd(int a, int b) {
	
	if(a == b)
		return a;
	while (a != b) {
		if(a > b)
			a -= b;
		else
			b -= a;
	}
	return a;
}
void nhap2SoNguyen(int &a, int &b) {
	printf("Nhap 2 so nguyen: ");
	scanf("%d%d", &a, &b);
}