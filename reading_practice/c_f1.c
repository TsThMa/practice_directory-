#include <stdio.h>
#include <limits.h>

/**
 * a function returning the max beween two numbers
 * Return: nothing
 */
int max(int num1, int num2);
 
int main() /* needed for function to run, without 'undefined reference to main' error*/
{
	int a = 100;
	int b = 200;
	int ret;

	/* calling a function to get max value*/
	ret = max(a, b); /*based on max() function in python*/

	printf("The max value is:%d\n", ret);
	return(0);
}

/* function returning the max for two numbers*/
int max(int num1, int num2)
{
/* local variable declaration*/
	int result;

	if (num1 > num2)
	{
		result = num1;
	}
	else
	{
		result = num2;
	}
	return(result);
}

