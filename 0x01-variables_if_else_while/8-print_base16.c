#include <stdio.h>
/**
 * main - Entry Point
 * Descerption: where program starts
 * Return: 0 (Success)
 */
int main(void)
{
	int a;
	char i;

	for (a = 0; a <= 9; a++)
		printf("%d", a);
	for (i = 'a'; i <= 'f'; i++)
		putchar(i);
	printf("\n");
	return (0);
}
