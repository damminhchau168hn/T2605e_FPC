#include <stdio.h>
#include <math.h>
int main (){
	float r;
	printf ("nhap so r = ");
	scanf ("%f", &r);
	float s;
	printf ("nhap so s = ");
	scanf ("%f", &s);
	float t;
	t = (float) pow ((1+r),3)*s;
	printf ("%f", t);
	
}
