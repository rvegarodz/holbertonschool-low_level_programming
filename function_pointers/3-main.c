#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * 
 *
 *
 */
int main(int argc, char *argv[])
{
	int num1, num2, product;
	char *operator;

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		operator = argv[2];
		product = get_op_func(operator)(num1, num2);
		printf("%d\n", product);
		return (0);
	}
}
