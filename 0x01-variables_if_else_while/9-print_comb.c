#include <stdio.h>
/**
 * main - Entry point
 * Descerption: where program starts
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 9)
			printf("%d\n", i);
		else
			printf("%d, ", i);
	}
	return (0);
}
