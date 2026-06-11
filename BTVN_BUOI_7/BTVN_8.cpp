#include <stdio.h>
int main () {
	int n;
	printf ("nhap so n =");
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
		if ( arr[j]>arr[i]){
			int temp = arr[i];
			arr[i]= arr[j];
			arr[i]=temp;
		
		}
	}
	
	}
	printf("gia tri giam dan");
	for (int i=0; i<n;i++) {
	printf ("%d", arr[i]);
	}
	}

