#include <stdio.h>
#include <iostream>

//1. Cho mảng gồm các phần tử { 2, 3, 4, 10, 40 } nhập vào từ bàn phím. Viết chương trình tìm kiếm giá trị 10. Sử dụng cài đặt tìm kiếm nhị phân để tìm kiếm.

#include <stdio.h>

int binarySearch(int a[], int n, int x) {
	int left = 0, right = n - 1, mid;
	
	while (left <= right) {
		mid = (left + right) / 2;
		if (a[mid] == x)
			return mid;
		if (a[mid] < x)
			return left = mid + 1;
		else
			return right = mid - 1;
	}
	return -1;
}

int main() {
	int a[] = { 2, 3, 4, 10, 40 };
	int n = sizeof(a) / sizeof (a[0]);
	int x = 10;
	int result = binarySearch(a, n, x);
	
	if (result == - 1)
		printf("Khong co %d trong mang!", x);
	else
		printf("%d co trong mang, o vi tri %d", x, result);
	
	return 0;
}