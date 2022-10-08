#include <stdio.h>
/**
 * fizz_buzz - prints number and mark multiples
 * main - run fizz_buzz
 * @num: limit of print
 * Return: alwasy 0 (success)
 */
void fizz_buzz(int num);

int main(void)
{
	fizz_buzz(100);
	return (0);
}

void fizz_buzz(int num)
{
	int i;

	for (i = 1; i <= num; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else
			printf("%d", i);
		if (i == num)
			putchar('\n');
		else
			putchar(' ');
	}	
}
