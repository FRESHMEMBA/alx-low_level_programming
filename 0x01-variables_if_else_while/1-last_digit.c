#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include<stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Prints the last digit of a randomly generated number.
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_digit = n % 10;

	printf("Last digit of %d is" n);
	if (n < 0)
		printf("-");
	printf("%d and is ", last_digit);

	if (last_digit > 5)
		printf("greater than 5");
	else if (last_digit == 0)
		printf("0");
	else
		printf("less than 6 and not 0");

	printf("\n");
	return (0);
}
