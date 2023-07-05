#include "main.h"
/**
 * _sqrt_recursion - calc sqrt
 * @n: Base
 * Return: sqrt(x)
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_helper(n, 0));
}

/**
 * _sqrt_helper - helper
 * @n: Base
 * @i: Power
 * Return: sqrt
*/
int _sqrt_helper(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (_sqrt_helper(n, i + 1));
	}
}
