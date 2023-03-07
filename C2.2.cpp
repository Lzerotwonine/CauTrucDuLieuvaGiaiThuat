#include <stdio.h>

// 2.2.  Hãy cài đặt hàm đệ quy tính T(n) = n! = 1 x 2 x 3 x … x n. Trong đó T(0) = 1

int GiaiThua(int n) {
	if (n == 1)
		return 1;
	else
	return n*GiaiThua(n - 1);
}

int main() {
	int n, GT;
	do {
		printf("Nhap n: ");
		scanf("%d", &n);
	}while(n < 0);

	GT = GiaiThua(n);
	printf("%d! = %d", n, GT);
}