#include <stdio.h>
/**
 * main - Entry point
 * Description: "print single digit no in base 10 followed by a new line"
 * Return: always 0
 */
int main(void)
{
int n;	

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
