#include <stdio.h>
/**
 *
 *
 *
 */
int main(void)
{
	int num;

	for (num = 0; num <= 100; num++)
	{
		if (num % 15 == 0)
			printf("Fizz Buzz ");
		else if (num % 5 == 0)
			printf("Buzz ");
		else if (num % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", num);
	}
	printf("\n");
}
