#include <stdio.h>

/**
 * main - Entry point
 * source code will print the relation between the values of int a and b
 * using relational operators (==, !=, >, <, >=, <=)
 */
int main()
{
	int a = 21;
	int b = 10;
	
	if (a == b) /* if the value of a is equal to the value of b*/
	{
		printf("Line 1 - a is equal to b\n");
	}
	else       /* it's inferred that this calculates (a != b)*/
	{
		printf("Line 1 - a is not equal to b\n");
	}

	if (a < b) /* if the value of a is less than the value of b*/
	{
		printf("LIne 2 - a is less than b\n");
	}
	else
	{
		printf("Line 2 - a is not less than b\n");
	}

	if (a > b) /* if the value of a is greater than the vale of b*/
	{
		printf("Line 3 - a is greater than b\n");
	}
	else
	{
		printf("Line 3 - a is not greater than b\n");
	}

/* changing the values of a and b for the other two operators (Just to see)*/

	a = 5;
	b = 20;

	if (a <= b) /* if a is less tha or equal to b*/
	{
		printf("Line 4 - a is less than or equal to b\n");
	}
	else
	{
		printf("Line 4 - a is not less than or equal to b\n");
	}

	if (a >= b) /* if a is greater than or or equal to b*/
	{
		printf("Line 5 - a is greater than or equal to b\n");
	}
	else 
	{
		printf("Line 5 - b is either greater than or equal to b\n");
	}
}


