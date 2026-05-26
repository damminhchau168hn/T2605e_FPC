#include <stdio.h>
int main () {
	int a;
	printf ("Nhap so a = ");
	scanf ("%d", &a);
	int b;
	printf ("nhap so b =");
	scanf("%d",&b);
	float x;
	if (a != 0){
		x = float (-b)/a;
		printf ("gia tri x %f", x);
	}else { if (b ==0) {
			printf ("x vo so nghiem");
			} else {
			printf ("x vo nghiem");
			}
		
	}
}
