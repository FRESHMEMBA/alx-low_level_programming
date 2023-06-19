#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Generates a random integer, then determines whether it is negative or positivi or equal to zero
 * Return - O (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("%d is ", n);
	if (n < 0)
		printf("negative");
	else if (n > 0)
		printf("positive");
	else
		printf("zero")
	return (0);
}
