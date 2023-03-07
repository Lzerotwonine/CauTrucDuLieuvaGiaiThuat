#include <stdio.h>
#include <conio.h>

// 1.3. Hãy khai báo kiểu dữ liệu biểu diễn khái niệm điểm trong mặt phẳng Oxy và định nghĩa hàm nhập, hàm xuất cho kiểu dữ liệu này.
	
void NhapToaDo() {
	int x, y;
	
	printf("\nNhap hoanh do x: ");
	scanf("%d", &x);
	
	printf("\nNhap tung do y: ");
	scanf("%d", &y);
}
                         
void XuatToaDo() {
	int x, y;
	printf("\nToa do diem trong mat phang la: (%d;%d)", x, y);
}
                                                            
int main() {
	NhapToaDo();
	XuatToaDo();
	return 0;
}