#include <stdio.h>

/* main - Entry point
 * writting a function that prits a script when age is entered.
 * Return: "You're pretty young!" if age is less than 100
 * "You're old" if age iis equal to 100
 * "You're really old!" if age is greater than 100.
 */

int main()
{
	int age; /*The variable thta we're making use of here is age*/

	printf("Please enter your age: ");
	scanf("%d", &age);
	if (age < 100)
	{
		printf("You're pretty young!\n");
	}
	else if (age == 100)
	{
		printf("You're old\n");
	}
	else
	{
		printf("You're really old!\n");
	}
	return 0;
}
