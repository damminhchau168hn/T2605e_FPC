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
	int c2 = 0;
	for (i = 0; i < n; i++){
	if (arr[i]%2!=0){
		c = c + 1;
			if (c %2 == 0){
				t = t + arr [i];
				c2 = c2 + 1;
			}
		}		
	}
	if (c2 > 0 ){
		float tb =(float) t/c2;
		printf ("so trung binh bien trong man n so %f", tb);
	} else {
		printf ("mang khong co so le nao o vi tri chan");
	}
}
