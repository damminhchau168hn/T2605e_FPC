#include <stdio.h>
int main () {
	int n;
	printf ("nhap so n = ");
	scanf ("%d", &n);
	int x;
	printf ("nhap so x = ");
	scanf ("%d",&x);
	int arr[n];
	int i; 
	for (int i=0; i <n; i++){
		printf ("nhap so thu %d",i+1);
		scanf ("%d", &arr[i]);
		}
	for (int i=0; i <n; i++){
		if (arr[i] == x) {
		printf ("%d", i+1);
		} 
}
}
