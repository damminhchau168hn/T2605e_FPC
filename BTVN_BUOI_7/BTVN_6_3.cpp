#include <stdio.h>
#include <stdlib.h>

int main () {

	int n;

	printf ("Nhap so n = ");
	scanf ("%d", &n);

	int arr[n];

	// Nh?p m?ng
	for (int i = 0; i < n; i++) {

		printf ("Nhap so thu %d = ", i + 1);
		scanf ("%d", &arr[i]);
	}

	// Gán giá tr? ban d?u
	int max = arr[0];
	int min = arr[0];

	// Tìm max
	for (int i = 1; i < n; i++) {

		if (arr[i] > max) {

			max = arr[i];
		}
	}

	// Tìm min
	for (int i = 1; i < n; i++) {

		if (arr[i] < min) {

			min = arr[i];
		}
	}

	// In kho?ng d?i x?ng
	if (abs(max) > abs(min)) {

		printf ("[%d, %d]", -abs(max), abs(max));
	}

	else {

		printf ("[%d, %d]", -abs(min), abs(min));
	}

	return 0;
}
