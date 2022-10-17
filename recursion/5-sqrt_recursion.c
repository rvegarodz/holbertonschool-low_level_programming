#include "main.h"
/**
 *
 *
 *
 */
int sqrt_root(int root, int n);

int _sqrt_recursion(int n)
{
	return (sqrt_root(0, n));
}

int sqrt_root(int root, int n)
{
	int sqr = root * root;
	
	if (sqr < n)
		return (sqrt_root(root + 1, n));
	else if (sqr > n)
		return (-1);
	return (root);
}
