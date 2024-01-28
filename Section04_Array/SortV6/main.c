#include <stdio.h>
#include <stdlib.h>

//sắp xếp 1 mảng các số nguyên, giảm dần
//I: 1 mảng

//P: thuật toán nc lên thuyền lên
//	 phần hoán đổi thân xác, 2 biến đổi value cho nhau
//O: mảng đã sắp xếp

//tách hàm
////hàm hoán đổi 2 biến

//void swap(int a, int b);//hàm nhận về 2 con số, để hoán đổi 
//int chỉ trả về 1 value!!!

void swap(int* a, int* b);
//mún xài hàm thì đưa vào 2 tọa độ   &x, 	&y đưa cho tao
//trong hàm *a, *b			chính là  x, 	y ở xa xa kia

//hàm này nhận về 1 mảng có kích thước size nào đó
//sau đó nó sắp xếp giảm dần, và in ra kết quả
void sortArray(int a[], int size);


//void swapArray(int* a, int size);

int main(int argc, char *argv[]) {
	
	int a[] = {5, -10, -15, 20, -25, -1000};
	sortArray(a, 6);
	
	
	/*
	//x y
	int x = 10, y =100;
	printf("Before swapping, x = %d; y = %d\n", x, y);
	
	swap(&x, &y);
	
	printf("After swapping, x = %d; y = %d\n", x, y);
	*/
	return 0;
}		
void sortArray(int a[], int size){
	//in mảng trc khi sort
	printf("The array before sorting\n");
	for(int i = 0; i < size; i++)
		printf("%d ", *(a + i));
		
	for(int i = 0; i < size - 1; i++) //chốt để quét, chốt tới thg từ 4 là quét từ 5, hết rồi nên ko quét nx - 1
		for (int j = i + 1; j < size; j++)
			if (a[i] < a[j])
				swap(&a[i], &a[j]); 

	printf("\nThe array after sorting descending\n");		 
	for(int i = 0; i < size; i++)
		//printf("%d ", a[i]);
		printf("%d ", *(a + i));
}
//hàm cần 1 mảng, cần size để for, hàm cần 2 đầu vào!!!
/*void sortArray(int a[], int size){
	//in mảng trc khi sort
	int t;
	printf("The array before sorting\n");
	for(int i = 0; i < size; i++)
		printf("%d ", *(a + i));
		
	for(int i = 0; i < size - 1; i++)
		for (int j = i + 1; j < size; j++)
			if(a[i] < a[j])
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
	printf("\nThe array after sorting descending\n");		 
	for(int i = 0; i < size; i++)
		//printf("%d ", a[i]);
		printf("%d ", *(a + i));

}*/
			//&x	&y
void swap(int* a, int* b){
	int t = *a; //đến nhà đứa x xa xa 
	*a = *b;	//đến nhà đứa y xa xa, đổ value sang đứa x xa xa
	*b = t;		//tao *b tức là y xa xa = cũ của x đg nằm trog t
}