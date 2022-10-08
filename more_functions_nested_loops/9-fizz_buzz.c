#include <stdio.h>

void fizz_buzz(int num);

int main(void)
{
	fizz_buzz(100);
	return (0);
}

void fizz_buzz(int num)
{
	int i;

	for (i = 0; i <= num; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", num);
	}
	printf("\n");
}
