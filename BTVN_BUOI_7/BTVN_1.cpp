#include <stdio.h>
int main (){
	int n;
	printf("nhap so n =");
	scanf("%d",&n);
	int arr[n];
	int i;
	int nt; 
	for (int i=0; i < n;i ++) {
		printf("nhap so thu tu %d", i+1);
		scanf ("%d", &arr[i]);
	}
		int nguyento;
	for (int i = 0; i < n; i ++) {
		// XET arr[i] co phai snt?	
		int a;
		if (arr[i]< 2){
			nguyento =0;
		}else {
			for (a = 2; a <arr[i]; a++){
				if (arr[i]%a == 0){
					nguyento =0;
				} else {
					nguyento = 1;
				}
			}
		}
		if (nguyento==1){
		printf ("so nguyen to %d", arr[i]);
	}
		
	}
	
}
