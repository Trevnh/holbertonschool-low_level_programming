#include "main.h"
/**
 * prime_check - Checks if a number is prime
 * @n: integer
 * @i: integer
 *
 * Return: 1 if n is prime, 0 if n is not prime
 */
int prime_check(int n, int i)
{
	if (n < 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	if ((n % i == 0) && (i != n))
	{
		return (0);
	}
	if ((n % i == 0) && (i == n))
	{
		return (1);
	}
	return (prime_check(n, ++i));
}
/**
 * is_prime_number - Returns 1 if n is prime, 0 if not
 * @n: integer
 *
 * Return: Returns 1 if n is prime, 0 if not
 */
int is_prime_number(int n)
{
	return (prime_check(n, 2));
}
