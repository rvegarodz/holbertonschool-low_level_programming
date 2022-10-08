#include <stdio.h>

void fizz_buzz(int num);

int main(void)
{
	fizz_buzz(100);
	return (0);
}

void fizz_buzz(int num)
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
