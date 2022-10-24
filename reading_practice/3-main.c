#include <stdio.h>

/**
 * main - printing the address of a pointer
 *
 * Return: 0 Always.
 */
int main(void)
{
	int *p; /* pointer 'p' points to variable type int (integer)*/

	/* %p and '&' for calling address of variable p */
	printf("Address of variable 'p': %p\n", &p);
	return (0);
}
