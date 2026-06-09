#include <stdio.h>
int main () {
	int n;
	printf ("nhap so n =" );
	scanf ("%d", &n);
	int arr[n];
	int i;
	for (i=0; i < n; i++){
	printf ("nhap so thu %d", i);
	scanf ("%d", &arr[i]);
	}
	int t = 0;
	int c = 0;
	for (i = 0; i < n; i++){
	if (arr[i]%2!=0){
		t = t + arr[i];
		c = c + 1;
		}		
	}
	if (c > 0 ){
		float tb =(float) t/c;
		printf ("so trung binh bien trong man n so %f", tb);
	} else {
		printf ("mang khong co so le nao");
	}
}
