#include <iostream>
int main(int argc, char** argv) {
	int n;
	scanf("%d", &n);
	int a[n][n], count = 1;
	int h1 = 0, h2 = n - 1, c1 = 0, c2 = n - 1;
	while(h1<=h2 && c1 <= c2) {
		//dòng trên cùng của ma trận
		for(int i = c1; i <= c2; i++) {
			a[h1][i] = count;
			++count;
		}
		h1++;
		//cạnh bên phải của ma trận
		for(int i = h1; i <= h2; i++) {
			a[i][c2] = count;
			++count;
		}
		//cạnh dưới của ma trận
		--c2;
		if(c1<=c2) {
			for(int i = c2; i >= c1; i--) {
				a[h2][i] = count;
				++count;
			}
			--h2;
		}
		//cạnh bên trái của ma trận
		if(h1<=h2) {
			for(int i = h2; i >= h1; i--) {
				a[i][c1] = count;
				++count;
			}
			++c1;
		}
	}
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
		
	return 0;
}