#include <stdio.h>
#include <math.h>
int main (){
	float a;
	printf ("Nhap so a = ");
	scanf ("%f", &a);
	float b;
	printf ("Nhap so b = ");
	scanf ("%f", &b);
	float c;
	printf ("Nhap so c = ");
	scanf ("%f", &c);
	float delta, x1, x2; 
	if (a != 0){
		delta = b * b - 4 * a * c;
		if (delta >= 0){
			x1 = (- b + sqrt (delta))/(2*a);
			x2 = (-b - sqrt (delta))/(2*a);
			printf ("phuong trinh co nghiem la ");
			printf ("%f", x1);
			printf (" và %f", x2);
		}else {
			printf ("phuong trinh vo nghiem");
		}
	}else {
		if (b != 0){
			x1 = -c/b;
			printf ("%f",x1);
		}else {
			if (c == 0){
				printf ("phuong trinh vo so nghiem");
			}else {
				printf ("phuong trinh vo nghiem");
			}
		}
	}
}
