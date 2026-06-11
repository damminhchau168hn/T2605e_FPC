#include <stdio.h>
int main () {
	int n;
	printf ("nhap so thu tu %d", n);
	scanf ("%d", &n);
	int arr[n];
	for (int i = 0; i <n; i++ ){
		printf ("nhap so thu tu %d",i+1);
		scanf ("%d", &arr[i]);
	}
	printf ("dao_nguoc_la");
	for (int i = n-1; i>=0; i--){
		printf ("%d", arr[i]);
	}
}
