#include <stdio.h>

/**
 * main - Entry Point
 * Return: 0
 */
void print_alphabet_x10(void); /* protoype is used as forward declar.*/

int main(void)
{
	print_alphabet_x10();
	return (0);
}

/**
 * print_alphabet_x10 - function that prints alphabet x10, in lowercase
 * return: nothing
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	while (i < 10)
	{
		c = 'a';

		while ((c >= 97) && (c <= 122))
		{
			putchar(c);
			++c; /* 2nd while loop incre. will print script horizontally*/
		}
		putchar('\n');
		++i; /* 1st while loop incre. will print script downwards*/
	}
	return;
}
