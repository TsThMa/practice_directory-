#include <stdio.h>

main()
{
	int a = 21;
	int b = 10;
	int c;

	c = a + b; /* '+' adds two operands*/
	printf("Line 1 - Value of c is %d\n", c);

	c = a - b; /* '-' substracts second operand from first operand*/
	printf("Line 2 - Value of c is %d\n", c);

	c = a * b; /* '*' multiplies both operands*/
	printf("Line 3 - Value of c is %d\n", c);

	c = a / b; /* '/' divides numerator by denumerator*/
	printf("Line 4 - Value of c is %d\n", c);

	c = a % b; /* '%' Modulus Operator and remainder of after an integer division.*/
	printf("Line 5 - Value of c is %d\n", c);

	c = a++; /* '++' Increment operator increases the integer value by one.*/
	printf("Line 6 - Value of c is %d\n", c);

	c = a--; /* '--' Decrement operator decreases the integer value by one.*/
	printf("Line - Value of c is %d\n", c);

}

