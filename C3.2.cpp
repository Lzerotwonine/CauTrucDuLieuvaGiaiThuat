#include <stdio.h>

//3.2. Sắp xếp mảng giảm dần.
//Hàm hoán vị
void HoanVi(int &x, int &y)
{
	int tam = x;
	x = y;
	y = tam;
}

//Hàm nhập mảng
void NhapMang(int a[], int &n) {
	for (int i = 0; i < n; i++) {
		printf("Nhap phan tu thu %d: ", i);
		scanf("%d", &a[i]);
	}
}

//Selection Sort
void SelectionSort(int a[], int n) {
	int min;
	for (int i = 0; i < n - 1; i++) {
		min = i;
		
		for (int j = i + 1; j < n; j++)
			if (a[j] > a[min])
				min = j;
		HoanVi(a[min], a[i]);
	}
}

//Hàm xuất mảng
void XuatMang(int a[], int n) {
	printf("Mang da duoc sap xep la: ");
	for (int i = 0; i < n; i++)
		printf("%d", a[i]);
	printf("\n");
}

int main () {
	int n;
	printf("Nhap so luong phan tu n: ");
	scanf("%d", &n);
	
	int a[n];
	NhapMang(a, n);
	SelectionSort(a, n);
	XuatMang(a, n);
}
