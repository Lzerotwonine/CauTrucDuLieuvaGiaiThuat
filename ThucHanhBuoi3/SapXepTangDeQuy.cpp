//20. Cho mảng 1 chiều các số thực. Hãy viết hàm đệ quy sắp xếp các giá trị trong mảng tăng dần

void SapXepTang(int a[], int n){
	if(n==1)
		return;
	for(int i=0;i<n;i++){
		if(a[i] > a[n-1]){
			int tam = a[i];
			a[i]=a[n-1];
			a[n-1]=tam;
		}
	}
	SapXepTang(a,n-1);
}