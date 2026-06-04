#include <stdio.h>
int main (){
	int n;
	printf ("nhap so n =");
	scanf ("%d", &n);
	int tong_cac_chu_so = 0;	
	while (n !=0){
		tong_cac_chu_so = tong_cac_chu_so + n%10;
		n = n/10;
	}
		printf ("tong cac chu so %d", tong_cac_chu_so);
}
