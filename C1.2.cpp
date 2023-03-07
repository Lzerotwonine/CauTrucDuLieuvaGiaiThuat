#include <stdio.h>
#include <conio.h>

// 1.2. Hãy khai báo kiểu dữ liệu biểu diễn khái niệm hỗn số trong toán học và định nghĩa hàm nhập, hàm xuất cho kiểu dữ liệu này
	
void NhapHonSo() {
	int tu, mau, songuyen;
	printf("\nNhap tu so: ");
	scanf("%d", &tu);
	
	do {
		printf("\nNhap mau so: ");
		scanf("%d", &mau);
		printf("\nNhap so nguyen: ");
		scanf("%d", &songuyen);
		
		if(mau == 0) {
		printf("\nMau so khong the bang 0!");
			if (songuyen == 0)
			printf("\nSo nguyen cua hon so khong the bang 0!");
		}
	}while(mau == 0 | songuyen == 0);
}
                         
void XuatHonSo() {
	int tu, mau, songuyen;
	printf("\nHon so da nhap la: %d %d/%d", songuyen, tu, mau);
}
                                                            
int main() {
	NhapHonSo();
	XuatHonSo();
	return 0;
}