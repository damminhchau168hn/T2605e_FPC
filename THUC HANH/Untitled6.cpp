#include <stdio.h>
int main (){
	int A;
	printf ("nhap so A =");
	scanf ("%d",&A);
	int B;
	printf ("nhap so B = ");
	scanf ("%d", &B);
	int C;
	printf ("nhap so C = ");
	scanf ("%d", &C);
	int max = A;
	if (B > max) {
		max = B;
	}
	if (C>max){
		max = C;
	}
	printf ("so lon nhat %d", max);
}
