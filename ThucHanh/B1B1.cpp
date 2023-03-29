#include <stdio.h>
#include <math.h>

// 2.3.  Cho mảng một chiều các số nguyên. Viết hàm tính tổng các số chẵn trong mảng bằng phương pháp đệ quy

int TongChan(int a[], int n) {
	if (n == 1) {
		return 0;
	}
	if (a[n - 1] % 2 == 0)
		return a[n - 1] + TongChan(a, n - 1);
	else
		return 0 + TongChan(a, n - 1);
}

void NhapMang(int a[], int &n) {
	do {
		printf("Nhap so luong phan tu n: ");
		scanf("%d", &n);
	} while(n < 0);
	for (int i = 0; i < n; i++)
	{
		printf("Nhap phan tu thu %d: ", i);
		scanf("%d", &a[i]);
	}
}

int main() {
	int n, a[n], TC;
	NhapMang(a, n);
	TC = TongChan(a, n);
	printf("Tong cac so chan trong mang! = %d", TC);
}