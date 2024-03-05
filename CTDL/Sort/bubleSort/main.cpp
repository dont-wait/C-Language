#include <iostream>
using namespace std;
void bubbleSort(int a[]);
int main(int argc, char** argv) {
	int a[] = {5, 3, 2, 7, 8, 1, 2};
	bubbleSort(a);	
	return 0;
}
void bubbleSort(int a[]) {
	for(int i = 0; i < 7; i++)
		for(int j = 0; j < 7 - i - 1; j++) 
			if(a[j] > a[j + 1]) {
				int t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
	for(int i = 0; i < 7; i++) 
		printf("%d ", a[i]);
}