#include <iostream>
using namespace std;

void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
void xuatFile(int a[], int n);
void docFile();
int main() {

	int a[100];
	int n;
//	nhapMang(a, n);
//	xuatMang(a, n);
//	xuatFile(a, n);
	docFile();


	return 0;
}
void docFile() {
	FILE *f = fopen("Mang a", "r");
	char ch;
		do{
			ch = fgetc(f);
			printf("%c", ch);
		}while(ch != EOF);
	
	fclose(f);
}
void xuatFile(int a[], int n) {
	FILE *f = fopen("Mang a", "w");

	for (int i = 0;  i < n; ++ i) {
		fprintf(f, "%d\n", a[i]);
	}
}
void xuatMang(int a[], int n) {


	for (int i = 0; i < n; ++i)
		printf("#%d = %d\n", i, a[i]);
}
void nhapMang(int a[], int &n) {
	do {
		printf("Nhap n: ");
		scanf("%d", &n);
	}while(n < 0);

	for (int i = 0; i < n; ++i) {
		printf("#%d = ", i);
		scanf("%d", &a[i]);
	}

}



