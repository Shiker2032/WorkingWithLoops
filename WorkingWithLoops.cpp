
#include <iostream>
int main() {
	int n = 0, sum = 0, middle = 0, min = 0, max = 0;
	printf("Input n ");
	scanf_s("%i", &n);

	for (int i = 0; i <= n; i++) {
		sum += i;
		if (max < i) {
			max = i;
		}
		else {
			min = i;
		}
	}
	printf("\nMin: %i ", min);
	printf("Max: %i ", max);
	printf("\nSum: %i", sum);
	printf("\nMiddle arithmetic: %f", (float)sum / n);
}

