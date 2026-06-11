#include <stdio.h>
#include <stdlib.h>
int main () {
	int n; 
	printf ("nhap so n =");
	scanf ("%d", &n);
	int arr[n];
	int x;
	printf("nhap so x = ");
	scanf("%d",&x);
	int max;
	int dis;
	int v;
	for (int i=0; i <n; i++){
		printf("nhap so %d", i+1);
		scanf ("%d", &arr[i]);
		int max=abs (arr[0]-x);
	max = abs(arr[0]-x);
	v = arr[0];
	if(abs(arr[i]-x)> max){
		max = abs (arr[i]-x);
		v=arr[i];
		}
	}
	printf("So xa X nhat %d", v);
}

