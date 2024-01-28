#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	int a[] = {-5555, -10, -15, -20, -25};
	int t;
	
	printf("The array before sorting\n");
	for (int i = 0; i < 5 ; i++)
		printf("%d ", a[i]);

	
	for (int i = 0; i < 5 - 1; i++) // con chốt [0] [1]
		for (int j = i + 1; j < 5; j++) // biến quét, từ chốt + 1 quét đi
			if (a[i] < a[j]){ // đứng trc mà lớn hơn là sai chỗ rồi
				//chốt					// sai chỗ, đổi chỗ lại
				t = a[i];
				a[i] = a[j];
				a[j] = t;
				
			}
	printf("\n");
	printf("The array after sorting ascending\n");
	for (int i = 0; i < 5; i++)
		printf("%d ", a[i]);
	


	return 0;
}