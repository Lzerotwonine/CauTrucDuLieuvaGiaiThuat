#include <stdio.h>

// 2.1 Tính S(n) = 1 + 2 + 3 + … + n

int GiaiThua(int n) {
	if (n == 1)
		return 1;
	else
	return n + GiaiThua(n - 1);
}

int main() {
	int n, GT;
	
	printf("Nhap n: ");
	scanf("%d", &n);
	
	GT = GiaiThua(n);
	printf("1 + 2 + ... + %d = %d", n, GT);
}
