#include <iostream>
using namespace std;
int binarySearch(int a[], int n, int x);
int main(int argc, char** argv) {
	int n;
	cin >> n;
	int x; cin >> x;
	int a[10];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	cout << "x in " << binarySearch(a, n, x);
	return 0;
}
int binarySearch(int a[], int n, int x) {
	int  left = 0, right = n - 1;
	
	while (left < right) {
		int mid = (left + right) / 2;
		if(a[mid] == x)
			return mid;
		else if(x > a[mid])
			left = mid + 1;
		else if(x < a[mid])
			right = mid - 1;
	}
	return -1;
	
	
}