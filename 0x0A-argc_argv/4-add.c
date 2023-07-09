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
	int i, j;
	int sum = 0;

	if (argc < 3)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}

		}

		if (isdigit(argv[i][0]))
		{
			sum += atoi(argv[i]);
		}
		else if (isdigit(argv[i][1]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);

	return (0);
}
