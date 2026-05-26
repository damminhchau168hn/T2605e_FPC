#include <stdio.h>
int main (){
	int A;
	printf ("Nhap so A = ");
	scanf ("%d", &A);
	if (A>0) {
		printf ("so duong");
	}else{if (A<0){
		printf ("so am");
		} else {
		printf ("khong am, khong duong");
		}
	}
}
