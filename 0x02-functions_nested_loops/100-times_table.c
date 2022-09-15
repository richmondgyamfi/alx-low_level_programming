#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * print_times_table - print_times_table block
 * Description: Print the sum of all multiples of 3 or 5 below 1024.
 * @i: is a variable
 * Return: 0
 */

void print_times_table(int i)
{
	i = 1;
	int total = 0;

	while (i < 1024)
	{
		if (i % 3 == 0)
			total += i;
		else if (i % 5 == 0)
			total += i;

		i++;
	}
	printf("%d\n", total);

	return (0);
}
