#include <stdio.h>
#include<conio.h>

// B3Buoi1. Viết hàm tính số hạng thứ n của hai dãy sau:
// X(0) = 1
// Y(0) = 0
// X(n) = x(n – 1) + y(n – 1) (n > 0)
// Y(n) = 3 * x(n – 1) + 2 * y(n – 1) (n > 0)

long X(int n);
long Y(int n);

long X(int n) {
	if(n == 0)
        return 1;
    return X(n - 1) + Y(n - 1);
}

long Y(int n) {
    if(n == 0)
        return 0;
    return 3 * X(n - 1) + 2 * Y(n - 1);
}

int main() {
	int n;
	
	do {
		printf("Nhap n: ");
		scanf("%d", &n);
	} while(n <= 0);
	
	printf("\nX = %d", X(n));
	printf("\nY = %d", Y(n));
	return 0;
}