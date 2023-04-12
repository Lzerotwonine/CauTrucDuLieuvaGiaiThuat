#include <stdio.h>
#define N 1000

/* Viết chương trình cài đặt stack bằng mảng. Nhập vào stack 6 phần tử  { 41, 23, 4, 14, 56, 1 }. 
Sau đó xuất giá trị top ra khỏi stack và in các phần tử trong stack còn lại. */ 

struct stack {
	int top;
	int S[N];
};

typedef stack STACK;

void Khoitao (STACK &s) {
	s.top = -1;
}

int IsEmpty (STACK s) {
	if (s.top == -1)
		return 1;
	else
		return 0;
}

int IsFull (STACK s) {
	if (s.top == N - 1)
		return 1;
	else
		return 0;
}

int Pop (STACK &s) {
	int x;
	if (!IsEmpty(s)) {
		x = s.S[s.top];
		s.top--;
	}
	else {
		printf("Stack rong!\n");
	}
}

void Push (STACK &s, int x) {
	if (!IsFull(s)) {
		s.top++;
		s.S[s.top] = x;
	}
	else {
		printf("Stack day!\n");
	}
}
	
void Input (STACK &s, int n) {
	for (int i = 0; i < n; i++) {
		int x;
		printf("Nhap phan tu thu %d: ", i);
		scanf("%d", &x);
		Push(s, x);
	}
}

void Output (STACK s) {
	for (int i = s.top; i > -1; i--) {
		printf("%d \n", s.S[i]);
	}
}

int main() {
	STACK s;
	Khoitao(s);
	
	int n;
	printf("\nNhap so luong can nhap: ");
	scanf("%d", &n);
	Input(s, n);
	
	printf("\nDa xoa %d ra khoi stack!\n", s.S[s.top]);
	Pop(s); 
	
	printf("\nDanh sach phan tu trong stack:\n"); 
	Output(s);
}
