#include <stdio.h>
#include <limits.h>

/**
 * print_sign - Prints the sign of a number
 * @n: The number to be checked
 *
 * Return: 1 if n is greater than zero, 0 if n is zero, -1 if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return 1;
	}
	else if (n < 0)
	{
		putchar('-');
		return -1;
	}
	else
	{
		putchar('0');
		return 0;
	}
}

int main(void)
{
	int result;

	/* Test cases with expected correct outputs */
	result = print_sign(98);
	printf("Expected output: +\n");
	printf("Actual output  : %c\n", result > 0 ? '+' : result == 0 ? '0' : '-');

	result = print_sign(0);
	printf("Expected output: 0\n");
	printf("Actual output  : %c\n", result > 0 ? '+' : result == 0 ? '0' : '-');

	result = print_sign(0xff);
	printf("Expected output: +\n");
	printf("Actual output  : %c\n", result > 0 ? '+' : result == 0 ? '0' : '-');

	result = print_sign(-1);
	printf("Expected output: -\n");
	printf("Actual output  : %c\n", result > 0 ? '+' : result == 0 ? '0' : '-');

	result = print_sign(99);
	printf("Expected output: +\n");
	printf("Actual output  : %c\n", result > 0 ? '+' : result == 0 ? '0' : '-');

	result = print_sign(INT_MAX);
	printf("Expected output: +\n");
	printf("Actual output  : %c\n", result > 0 ? '+' : result == 0 ? '0' : '-');

	result = print_sign(INT_MIN);
	printf("Expected output: -\n");
	printf("Actual output  : %c\n", result > 0 ? '+' : result == 0 ? '0' : '-');

	result = print_sign(-4);
	printf("Expected output: -\n");
	printf("Actual output  : %c\n", result > 0 ? '+' : result == 0 ? '0' : '-');

	return 0;
}

