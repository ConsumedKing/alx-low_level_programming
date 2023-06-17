#include <stdio.h>
/**
 * main - Entry Point
 * Descerption: where program starts
 * Return: 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
		putchar(48 + a);
	putchar('\n');
	return (0);
}
