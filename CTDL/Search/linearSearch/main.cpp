#include <iostream>

int linearSearch(int a[], int k, int n);
int main(int argc, char** argv) {
	int a[5], k, n;
	
	scanf("%d", &n);
	scanf("%d", &k);
	for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	if(linearSearch(a, k, n) == -1)
		printf("K NOT FOUND\n");
	else
		printf("K in %d", linearSearch(a, k, n));
	return 0;
}
int linearSearch(int a[], int k, int n) {
	for(int i = 0; i < n; i++)
		if(a[i] == k)
			return i;
	return -1;
}