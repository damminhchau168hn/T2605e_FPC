#include <stdio.h>
int main () {
	int n;
	printf ("nhap so n = ");
	scanf ("%d", &n);
	int arr[n];
	int i; 
	int max;
	int min;
	for (int i=0; i <n; i++){
		printf ("nhap so thu %d",i+1);
		scanf ("%d", &arr[i]);
		}
	for (int i=0; i <n; i++){
		int max = arr[0];
		if (arr[i] >  max) {
			max = arr[i];
		} 
	}
	
	for (int i = 0; i <n; i++) {
		int min = arr[0];
	if (arr[i] < min ){
		min = arr [i];
	}
	}
	if (abs (max) > abs (min)){
		printf ("[%d, %d]", -abs(max), abs(max));
	}
	else {
		printf ("[%d, %d]", -abs(min), abs(min));
	}
	}
	

