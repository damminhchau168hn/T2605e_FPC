#include <stdio.h>
int main () {
	int n;
	printf ("input n =");
	scanf ("%d",&n);
	double s = 0;
    if (n <= 0) {
        printf("Error");
    	} else {
        	for (int i = 1; i <= n; i++) {
            s = s + 1.0/i;
        }

        printf("s = %.6lf", s);
    }

    return 0;
}
