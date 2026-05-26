#include <stdio.h>
int main (){
	int A;
	printf ("Nhap so A =");
	scanf ("%d", &A);
	int B;
	printf ("Nhap so B = ");
	scanf ("%d", &B);
	int C;
	printf ("Nhap so C = ");
	scanf ("%d", &C);
	int max = A;
	if (B> max){
		max = B;
	}
	if (C > max){
		max = C;
	}
	printf ("so lon nhat %d", max);
}
