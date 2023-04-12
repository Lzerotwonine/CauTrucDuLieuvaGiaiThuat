//17. Cho mảng 1 chiều các số thực. Hãy viết hàm đệ quy tính tổng các giá trị có trong mảng.

long TongMang(int a[], int n){
	if(n==0)
		return 0;
	return a[n-1] + TongMang(a, n-1);
}