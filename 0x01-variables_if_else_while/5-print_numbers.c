#include <stdio.h>
/**
 * main - Entry point
 * Description: "a program that prints numbers in base 10"
 * Return: always 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
