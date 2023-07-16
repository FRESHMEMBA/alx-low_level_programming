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

	printf("The last digit of %d is %d and is ", n, last_digit);

	if (last_digit > 5)
		printf("and is greater than 5");
	else if (last_digit == 0)
		printf("and is 0");
	else
		printf("and is less than 6 and not 0");

	return (0);
}
