#include <stdio.h>
#include <stdlib.h>
/**
 * main - print multipication of two arguments-> int
 * @argc: number of arguments
 * @argv: values of arguments
 * Return: 0 - Success
*/
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (0);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}

	return (0);
}
