#include <stdio.h>
int main () {
	int n;
	printf("nhap so n =");
	scanf ("%d", &n);
	int arr[n];
	for (int i=0; i<n; i++){
	printf ("nhap so %d", i+1);
	scanf("%d", &arr[i]);
	}
	for (int i=0; i<n; i++){
		int arr[i];
		for (int j=i+1; j<n; j++){
		int arr[j];
		if ( arr[i]==arr[j]){
		for (int k=j; k<n-1; k++)
		arr[k]= arr[k+1];
		}
	}
	
	}
	printf("gia tri tang dan");
	for (int j=0; j<n;j++) {
	printf ("%d", arr[j]);
	}
	}
