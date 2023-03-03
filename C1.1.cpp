#include <stdio.h>
#include <conio.h>

// 1.1. Hãy khai báo kiểu dữ liệu biểu diễn khái niệm phân số trong toán học và định nghĩa hàm nhập, hàm xuất cho kiểu dữ liệu này.
struct PHANSO {
	int tu, mau;
};

typedef struct PHANSO PS;
PS NhapPhanSo() {
	PS phanso;
	printf("Nhap tu so: ");
	scanf("%d", &phanso.tu);
	
	do {
		printf("Nhap mau so: ");
		scanf("%d", &phanso.mau);
		
		if(phanso.mau == 0) {
		printf("Mau so khong the bang 0!");
		}
	}while(phanso.mau == 0);
	return phanso;
}
                         
PS XuatPhanSo() {
	PS phanso;
	printf("Phan so da nhap la: %d/%d", phanso.tu, phanso.mau);
	return phanso;
}
                                                            
int main() {
	PS phanso = NhapPhanSo();
	XuatPhanSo();
}