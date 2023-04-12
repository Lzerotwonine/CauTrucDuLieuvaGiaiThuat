#include <stdio.h>
#include <iostream>

//Cho mảng gồm các phần tử { 41, 23, 4, 14, 56, 1 } nhập vào từ bàn phím. Viết chương trình để sắp xếp. Sử dụng phương pháp sắp xếp đổi chỗ trực tiếp để sắp xếp

void HoanVi(int &x, int &y) {
	int tam = x;
	x = y;
	y = tam;
}

int interchangeSort(int a[], int n) {
	int i, j;
		for (i = 0; i < n - 1; i++) {
			for (j = i + 1; j < n; j++){
				if (a[i] > a[j])
					HoanVi(a[i], a[j]);
			}
		}
}

int main() {
   int a[] = { 2, 3, 4, 10, 40 };
   int n = sizeof(a) / sizeof(a[0]);
   int x = 10;
   int result = interchangeSort(a, n);

   if (result == -1)
      printf("Khong tim thay %d trong mang", x);
   else
      printf("%d co trong mang, o vi tri %d", x, result);

   return 0;
}