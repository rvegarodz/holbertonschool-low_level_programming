#include "main.h"
/**
 *
 *
 *
 */
int primes(int n, int i);

int is_prime_number(int n)
{
	return (primes(n, 2));
}

int primes(int n, int i)
{
	if (n <= 0 || n == 1)
		return (0);
	if (n == i)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (1);
	i++;
	return (is_prime_number(n));
}
