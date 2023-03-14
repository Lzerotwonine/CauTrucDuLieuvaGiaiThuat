#include <stdio.h>

//3.1. Nhập vào một mảng (kết thúc khi nhập vào 0) và sắp xếp mảng tăng dần.
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

//Interchange Sort
void InterchangeSort(int a[], int n) {
	int i, j;
	for (i = 0; i < n - 1; i++) {
		for (j = i + 1; j < n; j++) {
		if (a[i] > a[j])
			HoanVi(a[i], a[j]);
		}
	}
}

//Bubble Sort
void BubbleSort(int a[], int n) {
	int i, j;
	for (i = 0; i < n - 1; i++) {
		for (j = n - 1; j > i; j--) {
		if (a[j] < a[j - 1])
			HoanVi(a[j], a[j - 1]);
		}
	}
}

//Insertion Sort
void InsertionSort(int a[], int n){
	int pos, i;
	int x;
	for (int i = 1; i < n; i++) {
		x = a[i]; pos = i - 1;
		while((pos >= 0) && (a[pos] >x)) {
			a[pos + 1] = a[pos];
			pos--;
		}
		a[pos + 1] = x;
	}
}

//Selection Sort
void SelectionSort(int a[], int n) {
	int min;
	for (int i = 0; i < n - 1; i++) {
		min = i;
		
		for (int j = i + 1; j < n; j++)
			if (a[j] < a[min])
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
	InterchangeSort(a, n);
	BubbleSort(a, n);
	InsertionSort(a, n);
	SelectionSort(a, n);
	XuatMang(a, n);
}
