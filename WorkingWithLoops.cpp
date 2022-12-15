
#include <iostream>

void WorkingWithLoops_1() {
	// Print hello 9 times

	int i = 1;
	int sum = 0;

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
	//Print sum of numbers in range from 5 to 150

	i = 5;
	printf("\n");

	while (i < 15) {
		sum = sum + i;
		i++;
		printf(" %i", sum);
	}

}

void WorkingWithLoops_2()
{
	// multiply by 5

	for (int i = 1; i <= 10; i++) {
		printf("\n%i * 5 = %i ", i, 5 * i);
	}

	int exit = 7, a = 0;

	printf("\n To exit program input %i", exit);
	// number check

	while (a != exit) {
		printf("\n Input number to check");
		scanf_s("%i", &a);

		if (a > 10) {
			printf("\n %i is bigger than 10", a);
		}
		else if (a < 10) {
			printf("\n %i is lower than 10", a);
		}
		else {
			printf("\n %i equals 10", a);
		}

		if (a > 7) {
			printf("\n %i is bigger than 7", a);
		}
		else if (a < 7) {
			printf("\n %i is lower than 7", a);
		}
		else {
			printf("\n %i eqauls 7");
		}

		if (a % 2 == 0) {
			printf("\n %i can be devided by 2", a);
		}
		else if (a % 3 == 0) {
			printf("\n %i can be devided by 3", a);
		}
		else {
			printf("\n %i cannot be devided by 2 or 3", a);
		}
	}
}

int main()
{
	WorkingWithLoops_2();
}
