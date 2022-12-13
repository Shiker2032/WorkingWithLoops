
#include <iostream>

int main()
{   // Print hello 9 times

	int i = 1;

	while (i < 10) {
		printf("Hello\n");
		i++;
	}
	
	// Print numbers in range from 0 to 15

	i = 0;
	printf("\n");

	while (i < 16) {
		printf(" %i", i);
		i++;
	}
	//Print only uneven numbers

	i = 1;
	printf("\n");

	while (i < 16) {
		printf(" %i", i);
		i = i + 2;
	}
}
