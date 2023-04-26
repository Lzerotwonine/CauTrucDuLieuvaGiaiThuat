#include <stdio.h>

//5. Cho mảng gồm các phần tử { 41, 23, 4, 14, 56, 1 } nhập vào từ bàn phím. Viết chương trình để sắp xếp. Sử dụng phương pháp sắp xếp chèn trực tiếp để sắp xếp

void insertionSort(int a[], int n){
int pos, i;
	int x;
	for(i=1; i<n; i++){
		x = a[i]; pos = i-1;
		
		while((pos>=0)&&(a[pos]>x)){
            
			a[pos+1] = a[pos];
			pos--;
		}
		a[pos+1] = x;
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
   	insertionSort(a, n);
	XuatMang(a, n);
}