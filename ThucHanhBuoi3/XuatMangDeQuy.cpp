#include <stdio.h>

//12. Cho mảng một chiều các số nguyên. Viết hàm đệ quy xuất mảng.

//void nhapMang(int A[], int n) {
//    if (n == 0)
//		return;
//    scanf("%d", &A[n - 1]);
//	nhapMang(A, n - 1);
//}

void xuatMang(int A[], int n){
    if(n == 0)
        return;
    printf("%d", A[n - 1]);
    xuatMang(A, n - 1);
}

//int main(){
//
//    int n;
//    int A[100];
//
//    printf("Nhap so luong phan tu cua mang = ");
//    scanf("%d", &n);
//    nhapMang(A, n);
//
//    printf("Mang da nhap la:\n");
//    xuatMang(A, n);
//    printf("\n");
//
//    return 1;
//}