#include <stdio.h>
#include <conio.h>
#define MAX 100
void nhapMang(int a[], int n);
void xuatMang(int a[], int n);
void nhapN(int &n);
void xuatMangTheoYeuCau(int a[], int n);
int main(int argc, char** argv) {
	int a[MAX];
	int n;
	
	nhapN(n);
	nhapMang(a, n);
	xuatMang(a, n);
	xuatMangTheoYeuCau(a, n);
	
	
	return 0;
}
void xuatMangTheoYeuCau(int a[], int n) {
	printf("\nMang sap xep theo vi tri chan:\n");
	for(int i = 0; i < n - 1; i+=2)
		for(int j = i + 1; j < n; j++) {
		
			if(i % 2 == 0 && a[i] > a[j]) {
				int t = a[i];
				a[i] = a[j];
				t = a[j];
			}	
		}
	for(int i = 0; i < n; i++)
		printf("#%d = %d\n", i, a[i]);	
		
			
	printf("\nMang sap xep theo vi tri le:\n");
	for(int i = 1; i < n - 1; i+=2)
		for(int j = i + 1; j < n; j++) {
			if(i % 2 == 0 && a[i] < a[j]) {
				int t = a[i];
				a[i] = a[j];
				t = a[j];
			
			}		
		
		}
	for(int i = 0; i < n; i++)
		printf("#%d = %d\n", i, a[i]);	
		
	
}
void xuatMang(int a[], int n) {
	printf("\nMang vua nhap:\n");
	for(int i = 0; i < n; i++)
		printf("#%d = %d\n", i, a[i]);
	
}
void nhapMang(int a[], int n) {
	
	for(int i = 0; i < n; i++) {
		
		printf("#%d = ", i);
		scanf("%d", &a[i]);
	}
		
	
}
void nhapN(int &n) {
	
	printf("Nhap n: ");
	scanf("%d", &n);
	
}