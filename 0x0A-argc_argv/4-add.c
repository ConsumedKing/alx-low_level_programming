#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - adds all int in arguments
 * @argc: args number
 * @argv: args values
 * Return: 0 - Success
*/
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (isdigit(argv[i][0]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (0);
		}
	}
	printf("%d\n", sum);

	return (0);
}
