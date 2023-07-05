#include "main.h"

/**
 * is_prime_number - check if a number is prime or not
 * @n: number to be checked
 * Return: int: prime -> 1, not prime -> 0
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_helper_is_prime(n, 2));
}






/**
 * _helper_is_prime - check if a number is prime or not
 * @n: number to be checked
 * @y: iterator
 * Return: int: prime -> 1, not prime -> 0
*/
int _helper_is_prime(int n, int y)
{
	if (y == n)
		return (1);

	if (n % y == 0)
		return (0);
	else
		return (_helper_is_prime(n, y + 1));
}
































