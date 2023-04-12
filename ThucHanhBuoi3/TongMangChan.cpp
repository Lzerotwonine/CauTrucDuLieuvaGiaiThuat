//10. Cho mảng 1 chiều các số nguyên. Viết hàm tính tổng các số chẵn trong mảng bằng phương pháp đệ quy.

long TongMangChan(int a[], int n){
	if(n==0)
		return 0;
		if(a[n-1] % 2 == 0)
			return a[n-1] + TongMangChan(a, n-1);
	return TongMangChan(a, n-1);
}