#include <stdio.h>
int main () {
	int a;
	printf ("Nhap so a = ");
	scanf ("%d", &a);
	int b;
	printf ("nhap so b =");
	scanf("%d",&b);
	float x;
	if (a == 0){
		printf ("x vo so nghiem %d", x);
	}else {
		x = (float) (-b)/a;
		printf ("Giá tri x %f", x);
	}
}
