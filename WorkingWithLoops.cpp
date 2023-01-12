
#include <iostream>
int main() {
	int n = 0, sum = 0, var = 0, max = 0, min = 0;

	printf("input numbers amount ");
	scanf_s("%i", &n);

	
	for (int i = 0; i < n; ++i)
	{
		if (i == 0) {
			max = var;
			min = var;
		}		
		
		scanf_s("%d", &var);
		sum += var;

		if (var > max) {
			max = var;
		}
		else {
			min = var;
		}
	}

	printf("Sum: %i", sum);
	printf("\nMax: %i", max);
	printf("\nMin: %i", min);
	printf("\nMiddle arithmetic: %f", (float)sum / n);
}