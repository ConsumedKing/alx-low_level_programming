#include "main.h"
/**
 * _pow_recursion - calculate power using recursion
 * @x: Base
 * @y: Power
 * Return: Base to the power of Power
*/
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, --y));
}
