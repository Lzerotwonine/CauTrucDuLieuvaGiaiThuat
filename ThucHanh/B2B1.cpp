#include <stdio.h>

// B2Buoi1. Viết hàm đệ quy tính tổng của biểu thức sau đây: S(x, n) = x + x^2/2! + x^3/3! + … + x^n/n!

float Tong(float x, int n) {
	if(n == 0)
        return 0;
    if(n == 1)
        return x;
    return (1 + x/n) * Tong(x, n - 1) - (x/n) * Tong(x, n - 2);
}

int main() {
	int n;
	float x, T;
	
	do {
		printf("Nhap n: ");
		scanf("%d", &n);
	} while(n < 0);
	
	do {
		printf("Nhap x: ");
		scanf("%f", &x);
	} while(x < 0);
	
	T = Tong(x, n);
	printf("Tong = %.2f", T);
	return 0;
}