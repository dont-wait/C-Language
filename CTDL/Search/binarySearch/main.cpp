#include <iostream>
using namespace std;
int binarySearch(int a[], int size, int x);
int main(int argc, char** argv) {
	int x; cin >> x;
	int a[] = {5, 10, 15, 20, 25, 30, 100, 105, 120, 130};
	//cout << sizeof(a) / 4;  //int = 4 byte
	int size = (sizeof(a) / 4);
	printf("\nx dang nam o: %d ", binarySearch(a, size, x));
	return 0;
}
int binarySearch(int a[], int size, int x) {

	int left = 0, right = size - 1;
	while(left < right) {
		int mid = (left + right) / 2;
		if(a[mid] == x)
			return mid;
		else if(x > a[mid])	 
			left = mid + 1;
		else 
			right = mid - 1;
	}
	return -1;
}