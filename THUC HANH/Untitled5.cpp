#include <stdio.h>
int main (){
	int A;
	printf ("nhap A =");
	scanf ("%d",&A);
	int B;
	printf ("nhap B = ");
	scanf ("%d",&B);
	int C;
	printf ("nhap C =");
	scanf ("%d", &C);
	if (A>B){if (A>C){
		printf ("%d",A);	
		}else {
		printf ("%d",C);
		}
	}else {if (B>C){
		printf ("%d", B);	
		}else {
		printf ("%d",C);
		}
	}
}
