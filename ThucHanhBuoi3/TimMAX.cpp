//19. Cho mảng 1 chiều các số thực. Hãy viết hàm đệ quy tìm giá trị lớn nhất có trong mảng

int TimMAX(int a[], int n){
	if(n==1)
		return a[0];
		if(a[n-1] > TimMAX(a, n-1))
			return a[n-1];
	return TimMAX(a,n-1);
}