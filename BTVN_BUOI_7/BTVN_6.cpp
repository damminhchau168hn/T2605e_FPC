#include <stdio.h>
int main () {
	int n;
	printf ("nhap so n = ");
	scanf ("%d", &n);
	int arr[n];
	int i; 
	int max = arr[0];
	int min = arr[0];
	for (int i=0; i <n; i++){
		printf ("nhap so thu %d",i+1);
		scanf ("%d", &arr[i]);
		}
	for (int i=0; i <n; i++){
		if (arr[i] >  max) {
			max = arr[i];
		} 
	}
	
	for (int i = 0; i <n; i++) {
	if (arr[i] < min ){
		min = arr [i];
	}
	}
	if (max < 0){
		printf ("[%d, %d]", min, -min);
	}
	else if (min > 0){
		printf ("[%d, %d]", -max, max);
	}
	else if ((-1)*min<max){
		printf ("[%d, %d]", -max, max );
	}
	else {
		printf([%d, %d], min, - min);
	}
	}
	

