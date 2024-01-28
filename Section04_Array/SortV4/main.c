#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	int a[] = {5, -10, -15, -20, -25};
	int t;
	printf("The array before sorting\n");
	for (int i = 0; i < 5 ; i++)
		printf("%d ", *(a + i));
	printf("\n");
	//chốt áp chót đi quét với chót mảng
	for(int z = 0; z < 5 - 1; z++) // chốt 0, chốt 1, chốt 2, chốt 3
	{
		for (int i = z + 1; i < 5; i++)//tìm thằng nhỏ nhất của 1 lượt
			if(a[z] > a[i]){
				t = a[z];
				a[z] = a[i];
				a[i] = t;
			}	
	}	
	
	printf("The array after sorting ascending\n");
	for (int i = 0; i < 5; i++)
		printf("%d ", a[i]);
	


	return 0;
}