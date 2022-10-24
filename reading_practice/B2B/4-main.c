#include <stdio.h>

/**
 * main - storing the address of variable into a pointer
 *
 * Return: 0 Always
 */
int main(void)
{
	int n;
	int *p;

	n = 98;
/* &n is add. of var. 'n'*/
	p = &n;
/* the address of var. 'n' is going to be stored into pointer 'p'*/

	printf("Address of 'n': %p\n", &n);
	printf("Value of 'p': %p\n", p);
	return (0);
}
	
