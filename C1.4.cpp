#include <stdio.h>
#include <conio.h>

// 1.4. Hãy khai báo kiểu dữ liệu biểu diễn khái niệm điểm trong mặt phẳng Oxyz và định nghĩa hàm nhập, hàm xuất cho kiểu dữ liệu này.
	
void NhapToaDo() {
	int x, y, z;
	
	printf("\nNhap hoanh do x: ");
	scanf("%d", &x);
	
	printf("\nNhap tung do y: ");
	scanf("%d", &y);
	
	printf("\nNhap cao do z: ");
	scanf("%d", &z);
}
                         
void XuatToaDo() {
	int x, y, z;
	printf("\nToa do diem trong Oxyz la: (%d;%d;%d)", x, y, z);
}
                                                            
int main() {
	NhapToaDo();
	XuatToaDo();
	return 0;
}