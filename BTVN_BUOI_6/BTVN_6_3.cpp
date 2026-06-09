#include <stdio.h>
int main () {
    int n;
    printf ("nhap so n =" );
    scanf ("%d", &n);
    int arr[n];
    int i;
    for (i=0; i < n; i++){
        printf ("nhap so thu %d: ", i + 1);
        scanf ("%d", &arr[i]);
    }
    
    float x;
    printf ("nhap so x =");
    scanf ("%f", &x);
    
    int found = 0;
    
    for (i=0; i < n; i++){
        if (x == (float)arr[i]){
            found = 1;
            break; 
        }
    } 

  
    if (found == 1){
        printf ("trong mang co x\n");
    } else {
        printf ("trong mang khong co x\n"); 
    }
    
    return 0;
}
