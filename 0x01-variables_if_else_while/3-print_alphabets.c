#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
	char r = 'a';
	char R = 'A';

	while (r <= 'z')
	{
		putchar(r);
		r++;
	}
	while (R <= 'Z')
	{
		putchar(R);
		R++;
	}
	putchar('\n');

	return (0);
}
