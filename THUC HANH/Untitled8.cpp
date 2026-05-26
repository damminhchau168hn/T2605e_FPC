#include <stdio.h>
int main (){
	int a;
	printf ("nhap so a = ");
	scanf ("%d", &a);
	int b;
	printf ("nhap so b = ");
	scanf ("%d", &b);
	int c;
	printf ("nhap so c = ");
	scanf ("%d", &c);
	int max = a;
	if (b> max){
		max = b;
	}
	if (c> max){
		max = c;
	}
	printf ("so lon nhat %d", max);
}
