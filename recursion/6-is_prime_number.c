#include "main.h"
/**
 * is_prime_number - identify if a number is prime
 * @n: number to analyze
 * Return: 1 if its prime (success)
 */
int primes(int n, int i);

int is_prime_number(int n)
{
	return (primes(n, 2));
}
/**
 * primes - analize if a number is prime
 * @n: number to analize
 * @i: number 2
 * Return: 1 if its prime
 */
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
