#include <stdio.h>
#include <iostream>

//Cho mảng gồm các phần tử { 2, 3, 4, 10, 40 } nhập vào từ bàn phím. Viết chương trình tìm kiếm giá trị 10. Sử dụng cài đặt tìm kiếm tuyến tính để tìm kiếm.

int linearSearch(int a[], int n, int x)
{
	for (int i = 0; i < n; i++) {
		if (a[i] == x)
			return i;
	}
	return -1;
}

int main() {
   int a[] = { 2, 3, 4, 10, 40 };
   int n = sizeof(a) / sizeof(a[0]);
   int x = 10;
   int result = linearSearch(a, n, x);

   if (result == -1)
      printf("Khong tim thay %d trong mang", x);
   else
      printf("%d co trong mang, o vi tri %d", x, result);

   return 0;
}