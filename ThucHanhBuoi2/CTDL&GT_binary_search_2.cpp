#include <stdio.h>
#define n = 1000

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

void XuatMang(const int a[]) {
	int n;
	printf("Noi dung cua mang la: ");
	
	for (int i = 0; i < n; i++)
		printf("%d", a[i]);
	printf("\n");
}

void HoanVi(int &x, int &y) {
	int tam = x;
	x = y;
	y = tam;
}

void SapXepTang(int a[], int n) {
	int i, j;
		for (i = 0; i < n - 1; i++) {
			for (j = i + 1; j < n; j++){
				if (a[i] > a[j])
					HoanVi(a[i], a[j]);
			}
		}
}

int BinarySearch(int a[], int x, int n){
	int left = 0, right = n - 1;
	while(left <= right){
		int mid = (left + right)/2;
		if(a[mid] == x)
			return 1;
		else if(a[mid] < x) 
			left = mid + 1;
		else right = mid - 1;
	}
	return 0;
}

int main(){
	
	int n, x, a[n];
	
	NhapMang(a, n);
	SapXepTang(a, n);
	XuatMang(a);
	
	while(1){
		printf("\nNhap x can tim: ");
		scanf("%d", &x);
	    if (BinarySearch(a, n, x) == -1)
	    	printf("Khong tim thay %d trong mang", x);
	    else
	    	printf("%d co trong mang", x);
	}
	
	return 0;
}