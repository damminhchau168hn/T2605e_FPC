#include <stdio.h>
int main(){
	int A;
	printf("Nhap A = ");
	scanf ("%d", &A);
	int r;
	r = A % 2;
	if (r == 0)	{ 
		printf ("so chan");
	} 
	else {
		printf("so le");
	}
}
