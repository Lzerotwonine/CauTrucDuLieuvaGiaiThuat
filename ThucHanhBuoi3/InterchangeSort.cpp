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

void XuatMang(int a[], int n) {
	printf("Noi dung cua mang la: ");
	for (int i = 0; i < n; i++)
	printf("%d ", a[i]);
	printf("\n");
}

int main() {
   	int a[] = { 41, 23, 4, 14, 56, 1 };
   	int n = sizeof(a) / sizeof(a[0]);
   	int x = 10;
   	interchangeSort(a, n);
	XuatMang(a, n);
}
