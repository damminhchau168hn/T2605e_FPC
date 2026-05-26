#include <stdio.h>
int main (){
	int A;
	printf ("Nhap A = ");
	scanf ("%d",&A);
	int B;
	printf ("Nhap B = ");
	scanf ("%d",&B);
	int C;
	printf ("Nhap C = ");
	scanf ("%d",&C);
	int max = A;
	if (B > max) { 
		max = B;
	}
	if (C>max){
		max = C;
	}
	printf ("so lon nhat trong 3 so %d",max);
	}

