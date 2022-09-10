#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int r;

	srand(time(0));
	r = rand() - RAND_MAX / 2;
	
	if (r >= 0)
		printf("%d is positive\n", r);
	else
		printf("%d is negative\n", r);
	
	return (0);
}
