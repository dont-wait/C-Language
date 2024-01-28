////
//// Created by Windows on 20/01/2024.
////
//#include "iostream"
//using namespace std;
//void sortColors(int a[], int n);
//int main() {
//    int n;
//    int nums[n];
//    do {
//        cin >> n;
//    }while (n < 1 || n > 300);
//
//    for (int i = 0; i < n; ++i) {
//        cin >> nums[i];
//    }
//    sortColors(nums, n);
//    for (int i = 0; i < n; ++i) {
//        cout << nums[i] << " ";
//    }
//    return 0;
//}
//void sortColors(int a[], int n) {
//    for (int i = 0; i < n; ++i)
//        for (int j = i + 1; j < n; ++j) {
//            if(a[i] > a[j]) {
//                int t = a[i];
//                a[i] = a[j];
//                a[j] = t;
//            }
//        }
//}
