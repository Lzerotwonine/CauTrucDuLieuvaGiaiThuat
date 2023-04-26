#include <stdio.h>

//4. Cho mảng gồm các phần tử { 41, 23, 4, 14, 56, 1 } nhập vào từ bàn phím. Viết chương trình để sắp xếp. Sử dụng phương pháp sắp xếp chọn trực tiếp để sắp xếp

void HoanVi(int &x, int &y) {
	int tam = x;
	x = y;
	y = tam;
}

int selectionSort(int a[], int n) {
	int min;
	for (int i = 0; i < n - 1; i++) {
		min = i;
		for (int j = i + 1; j < n; j++) {
			if (a[j] < a[min])
			min = j;
		}
		HoanVi(a[min], a[i]);
	}
}

void XuatMang(int a[], int n) {
	printf("Mang da duoc sap xep la: ");
	for (int i = 0; i < n; i++)
	printf("%d ", a[i]);
	printf("\n");
}

int main() {
   	int a[] = { 41, 23, 4, 14, 56, 1 };
   	int n = sizeof(a) / sizeof(a[0]);
   	selectionSort(a, n);
	XuatMang(a, n);
}