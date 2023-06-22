#include <stdio.h>

/**
 * main - program that prints _putchar
 * Descereption: a simple program tha uses putchar
 * Return: 0 (Success)
 */

int main(void)
{
	char *arr;
	int i;

	arr = "_putchar";
	for (i = 0; arr[i] != '\0'; i++)
	{
		putchar(arr[i]);
	}
	putchar('\n');

	return (0);
}
