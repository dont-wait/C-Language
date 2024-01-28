#include <iostream>

//thuật toán lính canh

//tạo ra 1 con lính ở cuối dãy(n = K) // do i chạy từ 0 tới < n
//ta đi so sánh(for tới n) từng phần tử trong mảng với thg lính ở cuối ấy
//nếu phần tử bằng K thì trả về chỉ số(vị trí) mảng
//ko thì -1
int sentinelSearch(int a[], int k, int n);
int main(int argc, char** argv) {
	int a[5], k, n;
	
	scanf("%d", &n);
	scanf("%d", &k);
	
	for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	if(sentinelSearch(a, k, n) == -1)
		printf("K NOT FOUND\n");
	else
		printf("K in %d", sentinelSearch(a, k, n));
	return 0;
}
int sentinelSearch(int a[], int k, int n) {
	int i = 0;
	a[n] = k;
	while(a[i] != k) {
		i += 1;
	}
		if(i < n)
			return i;
		return -1;
	
}