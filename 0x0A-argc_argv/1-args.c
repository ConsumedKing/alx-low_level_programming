#include <stdio.h>
/**
 * main - print number of arguments passed to it
 * @argc: number of args
 * @argv: arg values
 * Return: 0 Success
*/
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
