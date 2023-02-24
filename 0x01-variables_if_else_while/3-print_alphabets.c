#include <stdio.h>
/**
 * main - Entry point
 * Description: 'a program that prints the alphabet in lowercase and uppercase'
 * Return: always0
 */
int main(void)
{
	int n = 93;
	int m = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (m <= 90)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
