#include <stdio.h>
int main (){
	int a;
	printf ("nhap so a =");
	scanf ("%d", &a);
	int b;
	printf ("nhap so b =");
	scanf ("%d", &b);
	int x = a;
    int y = b;
     while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
	int ucln = x;
    int bcnn = (a * b) / ucln;

    printf("UCLN = %d\n", ucln);
    printf("BCNN = %d\n", bcnn);

}
